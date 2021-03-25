import sys

a, b = map(int, sys.stdin.readline().split())

q, r = a//b, a % b

if r < 0:
    q += 1
    r -= b

print(q)
print(r)
