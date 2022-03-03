#!/bin/bash

echo "ionice cp . . . "
start_time=$(date +%s)

ionice -c 2 -n 0 nice -n -20 cp -rf /home/CodeProjects/pycopy/src/test.dat /home/CodeProjects/pycopy/dst/test.dat

end_time=$(date +%s)
elapsed=$(( end_time - start_time ))
echo "ionice cp time: "$elapsed
