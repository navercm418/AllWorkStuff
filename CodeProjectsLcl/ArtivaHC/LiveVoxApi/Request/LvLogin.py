#!/usr/bin/env python3.6
# 0770 amccrevan cacheusr

import sys
import requests
import json
from lvutils import zvFileUtil
from inspect import currentframe, getframeinfo
import socket

# ---------------------- NAMESPACE -----------------------------
zvNs = socket.gethostbyname(socket.gethostname())
if zvNs == "10.100.12.30":
    NS = "RMPROD"
else:
    NS = "RMDEV"
# --------------------------------------------------------------
# -------------------- Audits -------------
NL = '\n'
FR = currentframe()
FN = getframeinfo(FR).filename

zvAudTxt = FN + NL
zvAudFlg = ""
if len(sys.argv) > 1:
    zvAudFlg = sys.argv[1]
    zvAudFlg = zvAudFlg.upper()
# ------------------------------------------
# -------------------- audit -------------------------------------------------------
def LvAudit(text):
    zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvLogIn.log", "w", text)
    print(zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvLogIn.log", "r"))
# ----------------------------------------------------------------------------------

# ------------------------------------------ Begin Login --------------------------------------------
url = 'https://api.livevox.com/session/login'

if NS == "RMPROD":
    zvClNam = "EOSUSA"
    zvUsrId = "EOSAPI"
    zvPaswd = "livevox1313$"
    zvAcess = "47bfb7cd-0a0c-469d-9ae2-e2f86e8104d3"
else:
    zvClNam = "EOS_TEST"
    zvUsrId = "eosdev"
    zvPaswd = "Qwerty@1234"
    zvAcess = "cdb51ccf-2898-4de2-96c7-f005b469da24"

payload = {'clientName': zvClNam, 'userName': zvUsrId, 'password': zvPaswd}
headers = {'content-type': 'application/json', 'LV-Access': zvAcess}

r = requests.post(url, data=json.dumps(payload), headers=headers)

if not "sessionId" in str(r.text):
    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': error: '+ str(r.text) + NL
else:
    zvSessionId = str(r.text)
    zvSessionId = zvSessionId.split(r'{"sessionId":"')[1]
    zvSessionId = zvSessionId.split(r'","')[0]

    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': sessionid = ' + zvSessionId + NL

    # write to file
    zvFileUtil("/home/eosbin/LiveVoxApi/Request/LvSessionId.txt", "w", zvSessionId)

# ------------------------------------------- Audit -------------------------------
if (zvAudFlg == "A") or (zvAudFlg == "AUDIT"):    
    txt = zvFileUtil("/home/eosbin/LiveVoxApi/Request/LvSessionId.txt", "r")
    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': file = ' + txt + NL
    LvAudit(zvAudTxt)
