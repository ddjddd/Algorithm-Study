import sys

a, b = map(int, sys.stdin.readline().split())
a -= 1
b -= 1
ax, ay = a//4, a % 4
bx, by = b//4, b % 4
print(abs(bx-ax)+abs(by-ay))
