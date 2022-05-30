import sys
a, b, c = map(int, sys.stdin.readline().split())
b -= 1
c -= 1

ans = 0
while b != c:
    b //= 2
    c //= 2
    ans += 1

print(ans)
