#!/bin/bash

zvUsr=$1
zvCmt=$2

cd /home/eosbin/ArtivaScripts
git add .
git commit --author="$zvUsr" -m "$zvCmt"
git push

ssh amccrevan@10.100.12.30 '/usr/local/bin/python3.6 /home/eosbin/ArtivaScripts/.src/.frmdev.py'

