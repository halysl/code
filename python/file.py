import os
#add1 = os.path.getcwd()
add2 = os.path.abspath(os.curdir)
add3 = os.path.abspath('.')
add4 = os.path.abspath('..')
#print("os.path.getcwd() result:", add1)
print("os.path.abspath(os.curdir) result:", add2)
print("os.path.abspath('.') result:", add3)
print("os.path.abspath('..') result:", add4)