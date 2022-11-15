import sys

a = sys.stdin.readline()

ret = 5
for i in range(1, int(a)):
    ret += (5*(i+1) - (2*i+1))
    ret %= 45678

print(ret)
