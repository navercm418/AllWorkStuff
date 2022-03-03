#!/bin/bash

zvHn=$(hostname)

if [[ "$zvHn" == "NW-SP3TEMP01" ]]; then
  /home/eosbin/ArtivaScripts/.src/cachetest.sh
else
  csession artivarm -UUSER < /home/eosbin/ArtivaScripts/.src/rmexscr.txt
fi
