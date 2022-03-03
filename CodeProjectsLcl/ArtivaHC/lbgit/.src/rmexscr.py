#!/usr/local/bin/python3.6

import sys
import subprocess
import time
import socket

# ============================= GLOBALS =========================
NL = "\n"
TODAY = time.strftime("%m/%d/%Y")
# ---------------------- NAMESPACE -----------------------------
zvNs = socket.gethostbyname(socket.gethostname())
if zvNs == "10.100.12.30":
    NS = "RMPROD"
else:
    NS = "RMDEV"
# --------------------------------------------------------------
zvExpFile = "/home/eosbin/ArtivaScripts/scripts/release.lb"
zvScrFile = "/home/eosbin/ArtivaScripts/scripts/"
zvCacheFile = "/home/eosbin/ArtivaScripts/.src/rmexscr.txt"
zvShellFile = "/home/eosbin/ArtivaScripts/.src/rmexscr.sh"
# ===============================================================

zvScr = sys.argv[1]
zvCnt = 0
zvScrLst = zvScr.split("~")

# ----------------------- File Write Begin --------------------------------------------
def zvFileWrt(file, action, data):
    _file = open(file, action)
    _wrt = data
    _file.write(_wrt)
    _file.close()
# ----------------------- File Write End  --------------------------------------------

# ------------------- setup main release file -----------------------
zvWrt = "***LBEXP***^"+ TODAY +"^"+NS+ NL
zvFileWrt(zvExpFile, "w", zvWrt)
# -------------------------------------------------------------------

# ----------------------------- Run Cmd Begin ----------------------------------------
def zvRunCmd(zvScrIn, zvCntIn):

    global NS

    if zvCnt < 1:
        zvOut = r'''DO ^%CD
'''+ NS +r'''
DO ^%G



STLBLK("'''+ zvScrIn +r'''")

HALT
'''
    else:
        zvOut = r'''DO ^%CD
'''+ NS +r'''
DO ^%G



STLBLK("'''+ zvScrIn +r'''","CODE","'''+ str(zvCntIn) +r'''")

HALT
'''

    zvFileWrt(zvCacheFile, "w", zvOut)

    zvPrc = subprocess.run([zvShellFile], stdout=subprocess.PIPE)
    zvTxt = zvPrc.stdout.decode('utf-8')

    zvTxt = zvTxt.split("Global ^")[1]
    zvTxt = zvTxt.split("Global ^")[0]

    try:
        zvTxt = zvTxt.split(')="')[1]
    except:
        zvTxt = "e1"
    try:
        zvTxt = zvTxt.rsplit('"', 1)[0]
    except:
        zvTxt = "e2"

    return zvTxt
# ----------------------------- Run Cmd End ----------------------------------------
# ----------------------------- params --------------------------------------------
def zdPars(scr, cnt):

    global NS

    zvOut = r'''DO ^%CD
'''+ NS +r'''
DO ^%G



STLBLK("'''+ scr +r'''","PARAM","'''+ str(cnt) +r'''")

HALT
'''

    zvFileWrt(zvCacheFile, "w", zvOut)

    zvPrc = subprocess.run([zvShellFile], stdout=subprocess.PIPE)
    zvTxt = zvPrc.stdout.decode('utf-8')

    zvTxt = zvTxt.split("Global ^")[1]
    zvTxt = zvTxt.split("Global ^")[0]

    try:
        zvTxt = zvTxt.split(')="')[1]
    except:
        zvTxt = "e1"
    try:
        zvTxt = zvTxt.rsplit('"', 1)[0]
    except:
        zvTxt = "e2"

    return zvTxt

# --------------------------------------------------------------------------------
# ----------------------------- Main Loop Begin ------------------------------------
zvLstCnt = 1
for s in zvScrLst:
    x = 1
    zvOut = ""
    zvCnt = 0
    zvScr = s
    _zvExpFilWrt = ""

    # ---- file appends
    zvWrt = "***Begin LB"+ NL
    zvWrt = zvWrt + zvScr + NL
    zvFileWrt(zvExpFile, "a", zvWrt)
    _zvExpFilWrt = zvWrt
    _zvScrFile = zvScrFile + zvScr + ".lb"
    zvFileWrt(_zvScrFile, "w", zvScr + NL)

    # -- params
    zvParams = ''
    zvParCnt = 1
    p = 1
    while p == 1:
        pr = zdPars(zvScr, zvParCnt)
        if pr == "e1":
            p = 0
        else:
            zvParams = zvParams + zdPars(zvScr, zvParCnt) + '~'
        zvParCnt = zvParCnt + 1

    if zvParams != '':
        zvParams = zvParams.replace("~", NL)
        zvParams = '***Begin PARAMS' + NL + zvParams + '***End PARAMS'

        # zvFileWrt(zvExpFile, "a", zvParams + NL)
        zvFileWrt(_zvScrFile, "a", zvParams + NL)

    while x == 1:

        zvOut = zvRunCmd(zvScr, zvCnt)

        if zvCnt == 0:
            zvOut = zvOut + NL +"***Begin CODE"

        if (zvOut == "e1") or (zvOut == "e2"):
            x = 0
            zvOut = "***End CODE"+ NL +"***End LB"
        else:
            zvCnt = zvCnt + 1

        zvOut = zvOut.replace(r'""', r'"')        
        
        if "***Begin CODE" in zvOut:
            if zvParams != '':
                _txt = zvOut
                _txt1 = _txt.split("***Begin CODE")[0]
                _txt2 = "***Begin CODE"
                zvOut = _txt1 + zvParams + NL + _txt2

        zvFileWrt(zvExpFile, "a", zvOut + NL)
        zvFileWrt(_zvScrFile, "a", zvOut + NL)

    zvLstCnt = zvLstCnt + 1
# ----------------------------- Main Loop End --------------------------------------
