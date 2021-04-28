import sys


a, b, c = map(int, sys.stdin.readline().split(" "))
a %= b
for _ in range(c-1):
    a = (a*10) % b
print((a*10)//b)
