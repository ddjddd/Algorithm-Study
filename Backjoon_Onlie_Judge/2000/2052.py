import sys

input = int(sys.stdin.readline())
ret = str(5**input)
ret = '0.'+ret.zfill(input)
print(ret)
