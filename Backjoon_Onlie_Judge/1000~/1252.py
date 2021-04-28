import sys

a, b = map(str, sys.stdin.readline().split())
ret = str(bin(int(a, base=2) + int(b, base=2)))[2:]
print(ret)
