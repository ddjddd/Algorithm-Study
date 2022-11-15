import sys


a, b, c = map(int, sys.stdin.readline().split(" "))
aa, bb, cc = map(int, sys.stdin.readline().split(" "))

mm = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


def solve():
    if aa-a >= 1000:
        if bb > b:
            return 'gg'

        elif bb == b:
            if cc >= c:
                return 'gg'

    t = 365*(a-1) + (a-1)//4 - (a-1)//100 + (a-1)//400 + sum(mm[:b]) + c
    tt = 365*(aa-1) + (aa-1)//4 - (aa-1)//100 + (aa-1)//400 + sum(mm[:bb]) + cc

    if ((a % 4 == 0) and (a % 100 != 0)) or (a % 400) == 0:
        if b > 2:
            t += 1

    if ((aa % 4 == 0) and (aa % 100 != 0)) or (aa % 400) == 0:
        if bb > 2:
            tt += 1

    return 'D-'+str(tt-t)


print(solve())
