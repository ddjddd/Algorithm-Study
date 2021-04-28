import sys

a = list(sys.stdin.readline().split())
ret = [int(i) for i in a]


def solve():
    for i in range(1, 1000000):
        cnt = 0
        for j in ret:
            if not i % j:
                cnt += 1
        if cnt >= 3:
            return i


print(solve())
