#!/usr/bin/python3

import struct
import os
import sys

# read arguments and setup options
zvOpt = ''
if len(sys.argv) > 1:
    zvOpt = sys.argv[1]
    zvOpt = zvOpt.upper()
    if zvOpt != '-EXPORT':
        exit('Sorry, the only accepted argument is "-export". Exiting.')
    if zvOpt == '-EXPORT':
        if os.geteuid() != 0:
            exit("You need to have root privileges to export transactions.\nPlease try again, this time using 'sudo'. Exiting.")
        else:
            zvOpt = 'Y'

def zdConvertTrxFile(filename):

    # setup export file
    zvXpr = ''
    zvXpr = zvXpr + 'RecordType|DateTime|UserId|Amount' +'\n'

    # initiate values
    zvTotCrt = 0.0
    zvTotDeb = 0.0
    zvApyStr = 0
    zvApyEnd = 0
    zvUsrBal = 0.0

    # Initial Position References
    zvRecStrt = 9
    zvInitRecLen = 13

    # Record Types
    zvRecTypDct = {
        b'\x00': 'Debit',
        b'\x01': 'Credit',
        b'\x02': 'StartAutopay',
        b'\x03': 'EndAutopay'
    }

    # open & read file
    with open(filename, 'rb') as zvBinFile:
        zvTrxFilRead = zvBinFile.read()

    # Header..
    # Ends at position 9
    # Format =      >       4      s          B              I
    #          Big Endian, size, char[], unsigned char, unsigned int
    zvHeadRec = struct.unpack('>4sBI', zvTrxFilRead[0:9])
    zvFilFmt = zvHeadRec[0]
    zvVer = zvHeadRec[1]
    zvNumRec = zvHeadRec[2]

    # translate individual records
    for r in range(zvNumRec):

        zvAmt = 0.0
        zvRecStop = zvRecStrt + zvInitRecLen
        
        # Individual record..
        # Format =      >       c           I              Q
        #          Big Endian, char, unsigned int, unsigned long long
        zvRecLine = struct.unpack('>cIQ', zvTrxFilRead[zvRecStrt:zvRecStop])
        zvRecTypInd = zvRecLine[0]
        zvDteTim = zvRecLine[1]
        zvUsrId = zvRecLine[2]

        # set appropriate position
        zvRecStrt = zvRecStop
        zvRecTyp = zvRecTypDct[zvRecTypInd]
        
        # for "Debit" & "Credit" types, the amount field will not be 0.0
        if (zvRecTyp == 'Debit') or (zvRecTyp == 'Credit'):
            # Amount Field..
            # Length = 8
            # Format =        >      d
            #          Big endian, double
            zvRecStop = zvRecStrt + 8
            zvAmt = struct.unpack('>d', zvTrxFilRead[zvRecStrt:zvRecStop])[0]
            zvRecStrt = zvRecStop

        # add record to export file
        zvXpr = zvXpr + zvRecTyp +'|'+ str(zvDteTim) +'|'+ str(zvUsrId) +'|'+ str(zvAmt) +'\n'
            
        # process individual records
        # Credit . . .
        if zvRecTyp == 'Credit':
            zvTotCrt = zvTotCrt + zvAmt

        # Debit . . .
        if zvRecTyp == 'Debit':
            zvTotDeb = zvTotDeb + zvAmt
            
        # StartAutopay . . .
        if zvRecTyp == 'StartAutopay':
            zvApyStr = zvApyStr + 1
            
        # EndAutopay . . .
        if zvRecTyp == 'EndAutopay':
            zvApyEnd = zvApyEnd + 1

        # Balance of user 2456938384156277127
        if zvUsrId == 2456938384156277127:
            if zvRecTyp == 'Debit':
                zvUsrBal = zvUsrBal - zvAmt
            if zvRecTyp == 'Credit':
                zvUsrBal = zvUsrBal + zvAmt

    # return results
    # Setup Return Value
    zvRtn = ''
    zvRtn = zvRtn + 'total credit amount={}' +'\n'
    zvRtn = zvRtn + 'total debit amount={}' +'\n'
    zvRtn = zvRtn + 'autopays started={}' +'\n'
    zvRtn = zvRtn + 'autopays ended={}' +'\n'
    zvRtn = zvRtn + 'balance for user 2456938384156277127={}'

    zvRtn = zvRtn.format(zvTotCrt, zvTotDeb, zvApyStr, zvApyEnd, zvUsrBal)

    # save full results to ".psv" file with root privileges.
    if zvOpt == 'Y':
        zvXprFil = open("txnexp.psv", "w")
        zvXprFil.write(zvXpr)
        zvXprFil.close()
        os.chown("txnexp.psv", 0, 0)
        os.chmod("txnexp.psv", 0o660)

    return zvRtn


def main():
    # run
    zvTrxFilNam = 'txnlog.dat'
    print(zdConvertTrxFile(zvTrxFilNam))

if __name__ == '__main__':
    main()
