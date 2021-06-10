import sys

tc = int(sys.stdin.readline())
for _ in range(0, tc):
    n = int(sys.stdin.readline())
    nn = n*n

    if str(nn)[-len(str(n)):] == str(n):
        print("YES")
    else:
        print("NO")
