import sys

a = list(map(int, sys.stdin.readline().split()))
x, y, r = map(int, sys.stdin.readline().split())


ans = 0
for idx, val in enumerate(a):
    if val == x:
        ans = idx + 1

print(ans)
