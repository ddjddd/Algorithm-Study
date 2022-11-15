import sys

tc = str(sys.stdin.readline())[:-1]
while tc != '0':
    ans = 11
    while ans >= 10:
        ans = 0
        for i in tc:
            ans += int(i)
        tc = str(ans)

    print(tc)
    tc = str(sys.stdin.readline())[:-1]
