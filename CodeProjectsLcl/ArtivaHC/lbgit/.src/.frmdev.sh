#!/bin/bash

# runs the find job script
cd /home/eosbin/ArtivaScripts
git pull

csession artivarm -UUSER < /home/eosbin/ArtivaScripts/.src/.frmdev.txt
