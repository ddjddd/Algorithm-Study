import sys


def solve():
    x, y = map(int, sys.stdin.readline().split())

    d = y - x

    if d == 0:
        return 0
    elif d == 1:
        return 1
    elif d == 2:
        return 2

    idx = 1
    while True:
        if d <= (idx)*(idx+1):
            break
        idx += 1

    if d <= (idx)**2:
        ans = 2 * (idx-1) + 1
    else:
        ans = 2 * (idx-1) + 2

    return ans

print(solve())
