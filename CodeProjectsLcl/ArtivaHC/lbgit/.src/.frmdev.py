#!/usr/local/bin/python3.6

import subprocess

# ============================= GLOBALS =========================
NL = "\n"
zvJobNum = ""
zvCacheFile = "/home/eosbin/ArtivaScripts/.src/.frmdev.txt"
zvShellFile = "/home/eosbin/ArtivaScripts/.src/.frmdev.sh"
# ===============================================================

# ----------------------- File Write Begin --------------------------------------------
def zvFileWrt(file, action, data):
    _file = open(file, action)
    _wrt = data
    _file.write(_wrt)
    _file.close()
# ----------------------- File Write End  --------------------------------------------

# -- clear & write file
zvFileWrt(zvCacheFile, 'w', 'x')

zvWrt = ""
zvWrt = zvWrt + "DO ^%MGDIR" + NL
zvWrt = zvWrt + "DO ^TASKMGR" + NL
zvWrt = zvWrt + "7" + NL
zvWrt = zvWrt + "?" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "HALT"

# -- get job number
zvFileWrt(zvCacheFile, 'w', zvWrt)

zvPrc = subprocess.run([zvShellFile], stdout=subprocess.PIPE)
zvTxt = zvPrc.stdout.decode('utf-8')


zvTxt = zvTxt.split(")  RMPROD 9")[0]

zvJobNum = zvJobNum + zvTxt[-4]
zvJobNum = zvJobNum + zvTxt[-3]
zvJobNum = zvJobNum + zvTxt[-2]
zvJobNum = zvJobNum + zvTxt[-1]

# -- clear & write file
zvFileWrt(zvCacheFile, 'w', 'x')

zvWrt = ""
zvWrt = zvWrt + "DO ^%MGDIR" + NL
zvWrt = zvWrt + "DO ^TASKMGR" + NL
zvWrt = zvWrt + "7" + NL
zvWrt = zvWrt + zvJobNum + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "" + NL
zvWrt = zvWrt + "HALT"

zvFileWrt(zvCacheFile, 'w', zvWrt)

zvPrc = subprocess.run([zvShellFile], stdout=subprocess.PIPE)
zvTxt = zvPrc.stdout.decode('utf-8')
