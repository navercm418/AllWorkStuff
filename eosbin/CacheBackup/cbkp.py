#!/usr/bin/python3.6
# 770 root root

from multiprocessing import Pool


zvInFile = '/home/eosbin/CacheBackup/CACHE.dat'
zvOutFile = '/home/eosbin/CacheBackup/cpy/CACHE.dat'

zvCnt = 1

f = open(zvInFile, 'rb')
while True:

    piece = f.read(500000000)    
    if not piece:
        break
    with open(zvOutFile +'.'+ str(zvCnt), "wb") as binary_file:
        binary_file.write(piece)
    zvCnt = zvCnt + 1

f.close()
