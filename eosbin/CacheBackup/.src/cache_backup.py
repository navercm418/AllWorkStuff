#!/usr/bin/python3.6
# 770 root root

import subprocess
import datetime
import smtplib
import os
import glob
import sqlite3

# ----------------- Standard Jobs Setup ------------------
# ========= GLOBALS ================
zvJOB = 'CCDDKP'
zvTODAY = "datetime('now')"
zvNOW = "datetime('now')"
# ==================================

# ======== DATABASE ================
zvDbFile = '/home/eosbin/.db/jobs.db'
zvDbCon = sqlite3.connect(zvDbFile)
zvCrs = zvDbCon.cursor()
# ==================================
# ---------------------------------------------------------

# set up db
zvCrs.execute("INSERT INTO JOB_HIST(JHSTJOBID,JHSTDTE,JHSTSTTIME,JHSTMSG) VALUES ('"+ zvJOB +"',"+ zvTODAY +","+ zvNOW +",'RUNNING')")
zvDbCon.commit()
zvDbCurId = str(zvCrs.lastrowid)

zvRpt = '''Hello
Here is a report of the cache backup just completed on ArtivaProd (10.100.12.30)''' + "\n"
zvNow = datetime.datetime.now()

zvRpt = zvRpt + 'Back up process started ----------- ' + str(zvNow) + "\n"
zvRpt = zvRpt + '=================================================================' + "\n"

# ======================================================================== HC BEGIN ================================================================================
# stop HC cache
zvRpt = zvRpt + 'Stopping HC Cache ----------------- ' + str(zvNow) + "\n"
subprocess.run(["ccontrol", "stop", "cache", "quietly"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
zvRpt = zvRpt + 'HC Cache was stopped --------- ' + str(zvNow) + "\n"

# copy cache files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/INTERSYSTEM/cache", "/ARTIVABACKUP/netgear_mount_point/HCPROD1/cache/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# copy HCPROD files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/HCPROD/CACHE.DAT", "/ARTIVABACKUP/netgear_mount_point/HCPROD1/namespace/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# copy nojourn files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/HCPROD/nojrn/CACHE.DAT", "/ARTIVABACKUP/netgear_mount_point/HCPROD1/nojrn/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# restart HC cache
zvRpt = zvRpt + 'HC Files were copied --------- ' + str(zvNow) + "\n"
process = subprocess.run(["ccontrol", "start", "cache"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"
zvRpt = zvRpt + 'HC Cache was started -------------- ' + str(zvNow) + "\n"
# ========================================================= HC END =================================================================================================

# ========================================================= RM BEGIN ===============================================================================================
# stopping RM cache
zvRpt = zvRpt + 'Stopping RM Cache ----------------- ' + str(zvNow) + "\n"
subprocess.run(["ccontrol", "stop", "artivarm", "quietly"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
zvRpt = zvRpt + 'RM Cache was stopped --------- ' + str(zvNow) + "\n"

# copy RM cache files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/INTERSYSTEM/artivarm", "/ARTIVABACKUP/netgear_mount_point/RMPROD1/cache/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# copy RMPROD files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/RMPROD/CACHE.DAT", "/ARTIVABACKUP/netgear_mount_point/RMPROD1/namespace/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# copy RM nojourn files
process = subprocess.run(["rsync", "-avI", "--progress", "/mnt/iscsi/RMPROD/nojrn/CACHE.DAT", "/ARTIVABACKUP/netgear_mount_point/RMPROD1/nojrn/"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# restart RM cache
zvRpt = zvRpt + 'RM Files were copied --------- ' + str(zvNow) + "\n"
process = subprocess.run(["ccontrol", "start", "artivarm"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"
zvRpt = zvRpt + 'RM Cache was started -------------- ' + str(zvNow) + "\n"
# ========================================================= RM END ===============================================================================================

# get status of cache instances
process = subprocess.run(["ccontrol", "list"], check=True, stdout=subprocess.PIPE, universal_newlines=True)
output = process.stdout
zvRpt = zvRpt + str(output) + "\n"

# send email of report
zvEmlLst = [
    'andrew.mccrevan@eos-usa.com',
    'Patrice.Jean-Baptiste@EOS-USA.com',
    'Steven.Madden@EOS-USA.com',
    'Joshua.Summers@EOS-USA.com',
    'Peter.Cappola@EOS-USA.com'
]

for x in zvEmlLst:

    zvBody = zvRpt
    TO = x
    FROM = 'system@ArtivaDev'
    SUBJECT = 'Cache Backup'
    BODY = 'Subject: {}\n\n{}'.format(SUBJECT, zvBody)

    server = smtplib.SMTP('emailrelay.collectonet.cca')
    server.sendmail(FROM, TO, BODY)
    server.quit()


# save changes & close database
zvCrs.execute("UPDATE JOB_HIST SET JHSTENDTIME = "+ zvNOW +", JHSTMSG = 'COMPLETE' WHERE JHSTID = " + zvDbCurId)
zvDbCon.commit()
zvDbCon.close()
