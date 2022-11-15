import sys


def love(s):
    return s.count('L'), s.count('O'), s.count('V'), s.count('E')


minsick = str(sys.stdin.readline())
l, o, v, e = love(minsick)


def lcount(a):
    ll, oo, vv, ee = love(a)
    L, O, V, E = l + ll, o + oo, v + vv, e + ee
    return ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E)) % 100


len = int(sys.stdin.readline())

tmp = 0
ans = ""
for i in range(0, len):
    input = str(sys.stdin.readline())[:-1]
    tc = lcount(input)
    if ans == "":
        ans = input
        tmp = tc

    else:
        if tc == tmp:
            if input < ans:
                ans = input
                tmp = tc
        elif tc > tmp:
            ans = input
            tmp = tc

print(ans)
