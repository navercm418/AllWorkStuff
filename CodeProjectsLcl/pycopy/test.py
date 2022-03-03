import time
import shutil
import pyfastcopy

start = time.time()

print("copying . . .")
shutil.copyfile("/home/CodeProjects/pycopy/src/test.dat", "/home/CodeProjects/pycopy/dst/test.dat")

end = time.time()

diff = end - start
diff = int(diff)

print(diff, "seconds")
