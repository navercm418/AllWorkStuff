import urllib.request

InFile = "cities.txt"
OutFile = "out.txt"
zvWrt = ''
NL = '\n'

# ---------------------------------------------------------------------------------------------------
           # Holbrook,+MA
def DistCalc(city):
    _city = city
                 # https://www.travelmath.com/driving-time/from/Lowell,+MA/to/Middleborough,+MA
                 # <h3 class="space" id="drivetime">51 minutes</h3>
    zvHttpTrip = r'https://www.travelmath.com/driving-time/from/Lowell,+MA/to/'+ _city
            
    zvTripOut = urllib.request.urlopen(zvHttpTrip).read()
    zvTripOutFmt = zvTripOut.decode()
    zvTxt = str(zvTripOutFmt)
    zvTxt = zvTxt.split('<h3 class="space" id="drivetime">')[1]
    zvTxt = zvTxt.split('</h3>')[0]
    zvOut = zvTxt

    return zvOut

# ---------------------------------------------------------------------------------------------------
# ------------------------- file utility ------------------------------------------
# -- example: zvFileUtil("Help.txt", "r")
def zvFileUtil(file, action, data=None):
    _file = open(file, action)    
    _wrt = data
    if action == "w":
        _file.write(_wrt)
    if action == "a":
        _file.write(_wrt)
    if action == "r":
        _wrt = _file.read()
        return _wrt
    _file.close()
# ----------------------------------------------------------------------------------
# ---------------------------------------------------------------------------------------------------

# Using readlines()
file1 = open(InFile, 'r')
Lines = file1.readlines()
 
for line in Lines:
    _ln = line.strip()

    # ---------------------------------------------------------------------------
    if _ln == 'Middleborough+Center,+MA' or _ln == 'Ocean+Bluff-Brant+Rock,+MA':
        print(_ln)
        zvWrt = zvWrt + _ln + '|1hr' + NL

    elif _ln == 'Lowell,+MA':
        print(_ln)
        zvWrt = zvWrt + _ln + '|1hr' + NL

    elif _ln == 'Mattapoisett+Center,+MA':
        print(_ln)
        zvWrt = zvWrt + _ln + '|1hr' + NL

    elif _ln == 'Tilton+Northfield,+NH':
        print(_ln)
        zvWrt = zvWrt + _ln + '|1hr' + NL

    # --------------------------------------------------------------------
    elif _ln == 'Northwest+Harwich,+MA' or _ln == 'Harwich+Center,+MA':
        _ln = 'Harwich,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    elif _ln == 'Millis-Clicquot,+MA':
        _ln = 'Millis,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    elif _ln == 'Mansfield+Center,+MA':
        _ln = 'Mansfield,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    elif _ln == 'Norton+Center,+MA':
        _ln = 'Norton,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    elif _ln == 'South+Duxbury,+MA':
        _ln = 'Duxbury,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    elif _ln == 'Acushnet+Center,+MA':
        _ln = 'Acushnet,+MA'
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL

    # ------------------------------------
    else:
        print(_ln)
        zvWrt = zvWrt + _ln + '|' + DistCalc(_ln) + NL


zvFileUtil(OutFile, 'w', zvWrt)
