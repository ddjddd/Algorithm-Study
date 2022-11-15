import sys

a, b, c = map(int, sys.stdin.readline().split(" "))

a -= 11
b -= 11
c -= 11

ret = a*1440 + b*60 + c

if ret < 0:
    ret = -1
print(ret)
