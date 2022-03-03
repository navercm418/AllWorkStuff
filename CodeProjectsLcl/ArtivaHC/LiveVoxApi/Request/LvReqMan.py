#!/usr/local/bin/python3.6
# 0770 amccrevan cacheusr

import sys
import subprocess
import requests
import json
import socket
from lvutils import zvFileUtil
from inspect import currentframe, getframeinfo


# ------------------ setup variables ------------
# ---------------- globals ----------------
# global zvFunc
# global zvData
# global NL
# global FR
# global LN
# global zvAudTxt
# global zvAudFlg
# global NS
# ---------------------------------------
zvFunc = sys.argv[1]

zvData = ""
if len(sys.argv) > 2:
    zvData = sys.argv[2]
if "_" in zvData:
    zvData = zvData.replace("_", " ")
# ---------------------- NAMESPACE -----------------------------
zvNs = socket.gethostbyname(socket.gethostname())
if zvNs == "10.100.12.30":
    NS = "RMPROD"
else:
    NS = "RMDEV"
# --------------------------------------------------------------
NL = '\n'
SQ = "'"
DQ = '"'
FR = currentframe()
FN = getframeinfo(FR).filename
LN = getframeinfo(FR).lineno

zvAudTxt = ""
zvAudFlg = ""
if len(sys.argv) > 3:
    zvAudFlg = sys.argv[3]
    zvAudFlg = zvAudFlg.upper()
    zvAudTxt = FN + NL
# ------------------------------------------------

# --------------------- help file --------------------------------------------
zvHelpInfo = zvFileUtil("/home/eosbin/LiveVoxApi/Request/LvReqHelp.txt", "r")
# ----------------------------------------------------------------------------

# -------------------- audit -------------------------------------------------------
def LvAudit(text):
    zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvReq.log", "w", text)
    print(zvFileUtil("/home/eosbin/LiveVoxApi/Log/LvReq.log", "r"))
# ----------------------------------------------------------------------------------

# ==============================================================================================================
# ------------------------------------ Login Begin ------------------------------------------------------------
def Login():
    with open('/home/eosbin/LiveVoxApi/Request/LvSessionId.txt', 'r') as file:
        global zvAudTxt
        zvSessionId = file.read().replace('\n', '')
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) + ': sessionId:' + zvSessionId + NL
    return zvSessionId
# ------------------------------------ Login End -------------------------------------------------------------
# ==============================================================================================================

# ==============================================================================================================
# --------------------------- Update LV History Begin --------------------------------------------------
def UpdateLvHistory(data):
    #               data = "lv hist id"*-*"return code"*-*"return-text"

    global zvAudTxt
    global zvAudFlg
    global NS

    data = data.replace(" ", "_")
    data = data.replace('"', '')

    zvLvh = data.split('*-*')[0]
    zvRtn = data.split('*-*')[1]
    zvTxt = data.split('*-*')[2]

    zvLvSh = r'/home/eosbin/LiveVoxApi/Request/LvReqSh.sh'
    
    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': '+ 'zvLvh:'+ zvLvh+ ', zvRtn:'+ zvRtn+ ', zvTxt:'+ zvTxt + NL
    # initial: subprocess.check_call([zvLvSh, zvLvh, zvRtn + '*-*' + zvTxt])

    # --------------------------------------- setup shell script -------------------------------------------
    zvShTxt = ''
    zvShTxt = zvShTxt + r'DO ^%CD' + NL
    zvShTxt = zvShTxt + NS + NL
    zvShTxt = zvShTxt + r'SET $ZTrap="^%OSCETN"' + NL
    zvShTxt = zvShTxt + r'DO INITBGV^STMISC4' + NL
    zvShTxt = zvShTxt + r'DO main^LBZZLVAPIRETURN("'+ zvLvh +r'","'+ zvRtn +'*-*'+ zvTxt +r'")' + NL
    zvShTxt = zvShTxt + r'QUIT' + NL
    zvShTxt = zvShTxt + r'HALT'
    
    zvFileUtil("/home/eosbin/LiveVoxApi/Request/LvReqTxt.txt", "w", zvShTxt)
    # ------------------------------------------------------------------------------------------------------
    
    if (zvAudFlg == "A") or (zvAudFlg == "AUDIT"):
        zvShRun = subprocess.Popen(zvLvSh, stdout=subprocess.PIPE)
        zvShOut = zvShRun.stdout.read()
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +": "+ str(zvLvh) + '|' + str(zvRtn) + NL
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +": Shell Out: "+ str(zvShOut) + NL
    else:
        zvShRun = subprocess.Popen(zvLvSh, shell=False, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL)
# --------------------------- Update LV History End  --------------------------------------------------------
# ==============================================================================================================

# ------------------ UpdatePhone Begin ----------------------------------------------------------------
def UpdatePhone(data):
    #           data = "acct#"*-*["phone"~"ordinal"~"phoneBlock"~"cellConsent",...]*-*"lv hist id"

    global zvAudTxt
    global zvAudFlg

    zvRtn = ""
    
    zvAcc = data.split("*-*")[0]
    zvPhnLst = data.split("*-*")[1]
    zvLvh = data.split("*-*")[2]

    zvPhnLst = zvPhnLst.split("[")[1]
    zvPhnLst = zvPhnLst.split("]")[0]
    zvPhnLst = zvPhnLst.split(",")

    FR = currentframe()
    zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': PhoneList:' + str(zvPhnLst) + NL    

    zvSessionId = Login()

    if zvSessionId != '401':
        
        zvPl = {
            "updateContactDetails": {
                "phone": [
                          {"phone": zvPhnLst[0].split("~")[0], "ordinal": zvPhnLst[0].split("~")[1], "phoneBlock": zvPhnLst[0].split("~")[2], "cellConsent": zvPhnLst[0].split("~")[3]},
                          {"phone": zvPhnLst[1].split("~")[0], "ordinal": zvPhnLst[1].split("~")[1], "phoneBlock": zvPhnLst[1].split("~")[2], "cellConsent": zvPhnLst[1].split("~")[3]},
                          {"phone": zvPhnLst[2].split("~")[0], "ordinal": zvPhnLst[2].split("~")[1], "phoneBlock": zvPhnLst[2].split("~")[2], "cellConsent": zvPhnLst[2].split("~")[3]},
                          {"phone": zvPhnLst[3].split("~")[0], "ordinal": zvPhnLst[3].split("~")[1], "phoneBlock": zvPhnLst[3].split("~")[2], "cellConsent": zvPhnLst[3].split("~")[3]},
                          {"phone": zvPhnLst[4].split("~")[0], "ordinal": zvPhnLst[4].split("~")[1], "phoneBlock": zvPhnLst[4].split("~")[2], "cellConsent": zvPhnLst[4].split("~")[3]},
                          {"phone": zvPhnLst[5].split("~")[0], "ordinal": zvPhnLst[5].split("~")[1], "phoneBlock": zvPhnLst[5].split("~")[2], "cellConsent": zvPhnLst[5].split("~")[3]},
                          {"phone": zvPhnLst[6].split("~")[0], "ordinal": zvPhnLst[6].split("~")[1], "phoneBlock": zvPhnLst[6].split("~")[2], "cellConsent": zvPhnLst[6].split("~")[3]},
                          {"phone": zvPhnLst[7].split("~")[0], "ordinal": zvPhnLst[7].split("~")[1], "phoneBlock": zvPhnLst[7].split("~")[2], "cellConsent": zvPhnLst[7].split("~")[3]},
                          {"phone": zvPhnLst[8].split("~")[0], "ordinal": zvPhnLst[8].split("~")[1], "phoneBlock": zvPhnLst[8].split("~")[2], "cellConsent": zvPhnLst[8].split("~")[3]},
                          {"phone": zvPhnLst[9].split("~")[0], "ordinal": zvPhnLst[9].split("~")[1], "phoneBlock": zvPhnLst[9].split("~")[2], "cellConsent": zvPhnLst[9].split("~")[3]}
                         ]
                }
            }

        url = 'https://api.livevox.com/contact/contacts/' + zvAcc
        headers = {'content-type': 'application/json', 'LV-Session': zvSessionId}

        payload = zvPl
        
        r = requests.put(url, data=json.dumps(payload), headers=headers)

        # ---- set return data & update lv hisory record ----
        zvRtn = str(r.text)   
        
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': rtn| data - var2...' + str(zvRtn) + '|' + str(data) + ' - ' + str(zvPl) + NL

        if zvRtn == "":
            zvRtn = "Phn204"
        else:
            zvRtn = "Phn404"

        UpdateLvHistory(zvLvh + '*-*' + zvRtn + '*-*' + r.text)

        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... '+ str(zvRtn) +'-'+ str(r.text) +'|'+ str(data) +' - '+ str(payload) + NL

    else:
        UpdateLvHistory(zvLvh + '*-*' + 'Log401' + '*-*login error')

        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... Log401-login error|'+ str(data) +' - '+ str(zvSessionId) + NL
# -----------------------------------------------------------------------------------------------------

# ------------------ Update Contact Begin -------------------------------------------------------------
def UpdateContact(data):
    #             data = "acct#"*-*["field name"~"field value"~"field category",...]*-*"lv hist id"

    global zvAudTxt
    global zvAudFlg
    zvFullErr = ""

    zvSessionId = Login()

    zvLvh = data.split('*-*')[2]
    zvAcc = data.split("*-*")[0]

    if zvSessionId != '401':

        url = 'https://api.livevox.com/contact/contacts/' + zvAcc
        headers = {'content-type': 'application/json', 'LV-Session': zvSessionId}
        
        zvFldLst = data.split("*-*")[1]
        zvFldLst = zvFldLst.replace("[", "").replace("]", "")
        zvFldLst = zvFldLst.split(",")

        zvPerLst = ""        
        zvCstLst = ""
        zvDefLst = ""

        for f in zvFldLst:
            
            zvFld = f.split("~")[0]
            zvVal = f.split("~")[1]            
            zvCat = f.split("~")[2]

            # ---- format ----
            zvFld = '"'+ str(zvFld) +'"'
            zvVal = '"'+ str(zvVal) +'"'
            
            # ---- person ----
            # 'firstName' 'lastName' 'email' 'dateOfBirth' 'ssn' 'zipCode'
            if zvCat == 'PER':
                zvPerLst = zvPerLst + zvFld +':'+ zvVal +','

            # ---- custom ----
            if zvCat == 'CST':
                zvCstLst = zvCstLst + '{"field": '+ zvFld +', "value": '+ zvVal +'},'

            # ---- default ----
            if zvCat == 'DEF':
                zvDefLst = zvDefLst + zvFld +':'+ zvVal +','
            # -----------------------------------------------------------------------

        # -- person list
        if len(zvPerLst) > 1:
            zvPerLst = zvPerLst[:-1]
            zvPerLst = '"person": {'+ zvPerLst +'}'
        else:
            zvPerLst = ""

        # -- custom list
        if len(zvCstLst) > 1:
            zvCstLst = zvCstLst[:-1]
            if len(zvPerLst) > 1:
                zvCstLst = ', "customFields": ['+ zvCstLst +']'
            else:
                zvCstLst = ' "customFields": ['+ zvCstLst +']'
        else:
            zvCstLst = ""

        # -- default list
        if len(zvDefLst) > 1:
            zvDefLst = zvDefLst[:-1]
            if (len(zvPerLst) > 1) or (len(zvCstLst) > 1):
                zvDefLst = ', '+ zvDefLst
        else:
            zvDefLst = ""

        zvFulLst = zvPerLst + zvCstLst + zvDefLst        

        payload = '{"updateContactDetails": {'+ zvFulLst +'} }'        
        payload = json.loads(payload)

        r = requests.put(url, data=json.dumps(payload), headers=headers)

        # ---- set return data & update lv hisory record ----
        zvRtn = str(r.text)

        if zvRtn == "":
            zvRtn = "Udt204"
        else:
            zvRtn = "Udt404"

        zvFullErr = 'rtn:'+ zvRtn +', msg:'+ r.text
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... '+ str(zvRtn) +'-'+ str(r.text) +'|'+ str(data) +' - '+ str(payload) + NL

        UpdateLvHistory(zvLvh + '*-*' + zvRtn + '*-*' + zvFullErr)

    else:
        UpdateLvHistory(zvLvh + '*-*' + 'Log401' + '*-*login error')
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... Log401-login error|'+ str(data) +' - '+ str(zvSessionId) + NL
# -----------------------------------------------------------------------------------------------------
# ------------------ Update Contact Begin -------------------------------------------------------------
def UpdateAll(data):
    #         data = "acct#"*-*["field name"~"field value"~"field category",...]*~*["phone"~"ordinal"~"phoneBlock"~"cellConsent",...]"lv hist id"

    global zvAudTxt
    global zvAudFlg
    zvFullErr = ""

    zvSessionId = Login()

    zvLvh = data.split('*-*')[2]
    zvAcc = data.split("*-*")[0]


    if zvSessionId != '401':

        url = 'https://api.livevox.com/contact/contacts/' + zvAcc
        headers = {'content-type': 'application/json', 'LV-Session': zvSessionId}
        
        zvUdtLst = data.split("*-*")[1]        
        zvFldLst = zvUdtLst.split("*~*")[0]        
        zvPhnLst = zvUdtLst.split("*~*")[1]
        

        zvFldLst = zvFldLst.replace("[", "").replace("]", "")
        zvFldLst = zvFldLst.split(",")

        zvPhnLst = zvPhnLst.replace("[", "").replace("]", "")        
        zvPhnLst = zvPhnLst.split(",")

        zvPerLst = ""        
        zvCstLst = ""
        zvDefLst = ""

        for f in zvFldLst:
            
            zvFld = f.split("~")[0]
            zvVal = f.split("~")[1]            
            zvCat = f.split("~")[2]

            # ---- format ----
            zvFld = '"'+ str(zvFld) +'"'
            zvVal = '"'+ str(zvVal) +'"'
            
            # ---- person ----
            # 'firstName' 'lastName' 'email' 'dateOfBirth' 'ssn' 'zipCode'
            if zvCat == 'PER':
                zvPerLst = zvPerLst + zvFld +':'+ zvVal +','

            # ---- custom ----
            if zvCat == 'CST':
                zvCstLst = zvCstLst + '{"field": '+ zvFld +', "value": '+ zvVal +'},'

            # ---- default ----
            if zvCat == 'DEF':
                zvDefLst = zvDefLst + zvFld +':'+ zvVal +','
            # -----------------------------------------------------------------------

        # -- person list
        if len(zvPerLst) > 1:
            zvPerLst = zvPerLst[:-1]
            zvPerLst = '"person": {'+ zvPerLst +'}'
        else:
            zvPerLst = ""

        # -- custom list
        if len(zvCstLst) > 1:
            zvCstLst = zvCstLst[:-1]
            if len(zvPerLst) > 1:
                zvCstLst = ', "customFields": ['+ zvCstLst +']'
            else:
                zvCstLst = ' "customFields": ['+ zvCstLst +']'
        else:
            zvCstLst = ""

        # -- default list
        if len(zvDefLst) > 1:
            zvDefLst = zvDefLst[:-1]
            if (len(zvPerLst) > 1) or (len(zvCstLst) > 1):
                zvDefLst = ', '+ zvDefLst
        else:
            zvDefLst = ""

        zvPhnPld = {"phone": [
                          {"phone": zvPhnLst[0].split("~")[0], "ordinal": zvPhnLst[0].split("~")[1], "phoneBlock": zvPhnLst[0].split("~")[2], "cellConsent": zvPhnLst[0].split("~")[3]},
                          {"phone": zvPhnLst[1].split("~")[0], "ordinal": zvPhnLst[1].split("~")[1], "phoneBlock": zvPhnLst[1].split("~")[2], "cellConsent": zvPhnLst[1].split("~")[3]},
                          {"phone": zvPhnLst[2].split("~")[0], "ordinal": zvPhnLst[2].split("~")[1], "phoneBlock": zvPhnLst[2].split("~")[2], "cellConsent": zvPhnLst[2].split("~")[3]},
                          {"phone": zvPhnLst[3].split("~")[0], "ordinal": zvPhnLst[3].split("~")[1], "phoneBlock": zvPhnLst[3].split("~")[2], "cellConsent": zvPhnLst[3].split("~")[3]},
                          {"phone": zvPhnLst[4].split("~")[0], "ordinal": zvPhnLst[4].split("~")[1], "phoneBlock": zvPhnLst[4].split("~")[2], "cellConsent": zvPhnLst[4].split("~")[3]},
                          {"phone": zvPhnLst[5].split("~")[0], "ordinal": zvPhnLst[5].split("~")[1], "phoneBlock": zvPhnLst[5].split("~")[2], "cellConsent": zvPhnLst[5].split("~")[3]},
                          {"phone": zvPhnLst[6].split("~")[0], "ordinal": zvPhnLst[6].split("~")[1], "phoneBlock": zvPhnLst[6].split("~")[2], "cellConsent": zvPhnLst[6].split("~")[3]},
                          {"phone": zvPhnLst[7].split("~")[0], "ordinal": zvPhnLst[7].split("~")[1], "phoneBlock": zvPhnLst[7].split("~")[2], "cellConsent": zvPhnLst[7].split("~")[3]},
                          {"phone": zvPhnLst[8].split("~")[0], "ordinal": zvPhnLst[8].split("~")[1], "phoneBlock": zvPhnLst[8].split("~")[2], "cellConsent": zvPhnLst[8].split("~")[3]},
                          {"phone": zvPhnLst[9].split("~")[0], "ordinal": zvPhnLst[9].split("~")[1], "phoneBlock": zvPhnLst[9].split("~")[2], "cellConsent": zvPhnLst[9].split("~")[3]}
                         ]}

        zvPhnPld = str(zvPhnPld)
        zvPhnPld = zvPhnPld[:-1]
        zvPhnPld = zvPhnPld[1:]
        zvPhnPld = zvPhnPld.replace("'", '"')
        
        zvFulLst = zvPerLst + zvCstLst + zvDefLst +","+ zvPhnPld

        payload = '{"updateContactDetails": {'+ zvFulLst +'} }'        
        payload = json.loads(payload)

        r = requests.put(url, data=json.dumps(payload), headers=headers)

        # ---- set return data & update lv hisory record ----
        zvRtn = str(r.text)

        if zvRtn == "":
            zvRtn = "Udt204"
        else:
            zvRtn = "Udt404"

        zvFullErr = 'rtn:'+ zvRtn +', msg:'+ r.text
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... '+ str(zvRtn) +'-'+ str(r.text) +'|'+ str(data) +' - '+ str(payload) + NL

        UpdateLvHistory(zvLvh + '*-*' + zvRtn + '*-*' + zvFullErr)

    else:
        UpdateLvHistory(zvLvh + '*-*' + 'Log401' + '*-*login error')
        FR = currentframe()
        zvAudTxt = zvAudTxt + str(getframeinfo(FR).lineno) +': <rtn> - <msg> | <data> - <payload> ... Log401-login error|'+ str(data) +' - '+ zvSessionId + NL
# -----------------------------------------------------------------------------------------------------
# ===============================================================================================================

# ===============================================================================================================
# --------------------------------- RUN FUNCTIONS BEGIN -----------------------------------------------
if zvFunc == "UpdateContact":
    UpdateContact(zvData)

if zvFunc == "UpdatePhone":
    UpdatePhone(zvData)

if zvFunc == "UpdateAll":
    UpdateAll(zvData)

if (zvFunc.upper() == "HELP") or (zvFunc.upper() == "H"):
    print(zvHelpInfo)

if (zvAudFlg == "A") or (zvAudFlg == "AUDIT"):
    LvAudit(zvAudTxt)
# --------------------------------- RUN FUNCTIONS END -------------------------------------------------
# ===============================================================================================================
