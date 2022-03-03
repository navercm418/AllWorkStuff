#!/usr/local/bin/python3.6
# 0770 amccrevan cacheusr

import os
import sys
import subprocess
import socket
from lvutils import zvFileUtil
from inspect import currentframe, getframeinfo


# ------------------ setup variables ------------
# ---------------- globals ----------------
# global NL
# global FR
# global LN
# global zvAudTxt
# global zvAudFlg
# global NS
# ---------------------------------------

# ---------------------- NAMESPACE -----------------------------
zvNs = socket.gethostbyname(socket.gethostname())
if zvNs == "10.100.12.30":
    NS = "RMPROD"
else:
    NS = "RMDEV"
# --------------------------------------------------------------
NL = '\n'
FR = currentframe()
FN = getframeinfo(FR).filename
LN = getframeinfo(FR).lineno

zvAudTxt = ""
zvAudFlg = ""
if len(sys.argv) > 1:
    zvAudFlg = sys.argv[1]
    zvAudFlg = zvAudFlg.upper()
    zvAudTxt = FN + NL
# --------------------------------------------------------------

# --------------------- help file --------------------------------------------
zvHelpInfo = zvFileUtil("/home/eosbin/LiveVoxApi/Request/LvReqHelp.txt", "r")
# ----------------------------------------------------------------------------

# -------------------- audit -------------------------------------------------------
def LvAudit(text):
    zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvWrk.log", "w", text)
    print(zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvWrk.log", "r"))
# ----------------------------------------------------------------------------------

# ==============================================================================================================
# ------------------------------------ Worker Begin ------------------------------------------------------------

# --------------------------------------- setup shell script -------------------------------------------
zvLvSh = r'/home/eosbin/LiveVoxApi/Worker/LvWrkSh.sh'

zvShTxt = ''
zvShTxt = zvShTxt + r'DO ^%CD' + NL
zvShTxt = zvShTxt + NS + NL
zvShTxt = zvShTxt + r'SET $ZTrap="^%OSCETN"' + NL
zvShTxt = zvShTxt + r'DO INITBGV^STMISC4' + NL
zvShTxt = zvShTxt + r'DO main^LBZZLVAPIWORKER' + NL
zvShTxt = zvShTxt + r'QUIT' + NL
zvShTxt = zvShTxt + r'HALT'

zvFileUtil("/home/eosbin/LiveVoxApi/Worker/LvWrkTxt.txt", "w", zvShTxt)
# ------------------------------------------------------------------------------------------------------
if (zvAudFlg == "A") or (zvAudFlg == "AUDIT"):
    zvShRun = subprocess.Popen(zvLvSh, stdout=subprocess.PIPE)
    zvShOut = zvShRun.stdout.read()
    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +": Shell Out: "+ str(zvShOut) + NL
    LvAudit(zvAudTxt)
else:
    # zvShRun = subprocess.Popen(zvLvSh, shell=False, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL)
    subprocess.call([zvLvSh], stdout=open(os.devnull, "w"), stderr=subprocess.STDOUT)
