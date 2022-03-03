#!/usr/local/bin/python3.6

import psutil
import socket
import requests
from bs4 import BeautifulSoup
import json
import schedule
import time
import smtplib
import sys
import os
import subprocess
from datetime import date

zvFnc = sys.argv[1]

#==========================================================================
def SendEmail(zvTo, zvBody):
        # Write email
        TO = zvTo
        FROM = "system@ArtivaProd"
        BODY = zvBody

        server = smtplib.SMTP('emailrelay.collectonet.cca')
        server.sendmail(FROM, [TO], BODY)
        server.quit()
#==========================================================================

# ----------------------- BYTES CONVERSION -------------------------------------
def bytesto(bytes, to, bsize=1024):
    """convert bytes to megabytes, etc.
       sample code:
           print('mb= ' + str(bytesto(314575262000000, 'm')))
       sample output:
           mb= 300002347.946
    """

    a = {'k' : 1, 'm': 2, 'g' : 3, 't' : 4, 'p' : 5, 'e' : 6 }
    r = float(bytes)
    for i in range(a[to]):
        r = r / bsize

    return(r)
# ------------------------------------------------------------------------------

# ---------------------------------- GLOBALS -----------------------------------
NL = '\n'
HOSTNAME = socket.gethostname()
CPUSG = psutil.cpu_percent(interval=None, percpu=False)
LOADAVG = psutil.getloadavg()
LOADAVGPCT = [x / psutil.cpu_count() * 100 for x in psutil.getloadavg()]
MEM = psutil.virtual_memory() # total, available, percent, used, free, active, inactive, buffers, cached, shared, slab
SMEM = psutil.swap_memory()   # total, used, free, percent, sin, sout
FS_ROOT = psutil.disk_usage('/') # total, used, free, percent
FS_HOME = psutil.disk_usage('/home')
FS_RM = psutil.disk_usage('/mnt/iscsi/RMPROD')
FS_HC = psutil.disk_usage('/mnt/iscsi/HCPROD')
# ------------------------------------------------------------------------------

# def SysChk
def SysChk():
    zvLdAv1 = round(LOADAVGPCT[0],2)
    zvLdAv5 = round(LOADAVGPCT[1],2)
    zvLdAv15 = round(LOADAVGPCT[2],2)

    zvOut = ''
    zvOut = zvOut + 'Server: ' + HOSTNAME + NL
    process = subprocess.run(["/home/eosbin/bin/curcpu"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
    output = process.stdout
    zvOut = zvOut + str(output) + NL


    process = subprocess.run(["ccontrol", "list"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
    output = process.stdout
    zvOut = zvOut + str(output) + NL

    # console log
    process = subprocess.run(["tail", "/mnt/iscsi/INTERSYSTEM/artivarm/mgr/cconsole.log"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
    output = process.stdout
    zvOut = zvOut + str(output) + NL

    #  csession artivarm -UUSER < $zvFileName
    process = subprocess.run(["/home/eosbin/SysCheck/syscheck.sh"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
    output = process.stdout
    zvOut = zvOut + str(output) + NL

    # ============================================================================================================================

    zvMessage = 'Subject: {}\n\n{}'.format('ArtivaProd System Check', zvOut)

    # zvEmailList = ['andrew.mccrevan@eos-usa.com','steven.madden@eos-usa.com']
    zvEmailList = ['andrew.mccrevan@eos-usa.com']
    for x in zvEmailList:
        SendEmail(x,zvMessage)
# =============================================================================================

# =============================================================================================
# ----------------------- Schedule -------------------------------------
if zvFnc == 's':

    # daily
    schedule.every().day.at("02:30").do(SysChk)
    schedule.every().day.at("07:30").do(SysChk)
    schedule.every().day.at("11:30").do(SysChk)
    schedule.every().day.at("16:30").do(SysChk)
    schedule.every().day.at("23:30").do(SysChk)

    # mon
    #schedule.every().monday.at("07:30").do(SysChk)
    # tue
    #schedule.every().tuesday.at("07:30").do(SysChk)
    # wed
    #schedule.every().wednesday.at("07:30").do(SysChk)
    # thu
    #schedule.every().thursday.at("07:30").do(SysChk)
    # fri
    # schedule.every().friday.at("07:30").do(SysChk)
    #-------------------------------------------------------------

    while True:
        schedule.run_pending()
        time.sleep(1)
# -----------------------------------------------------------------
# -------------- test -------------------------------------------
if zvFnc == 't':
    SysChk()
