import sys

input = str(int(sys.stdin.readline()))

ans = "NO"
for i in range(1, len(input)):
    a, b = input[:i], input[i:]

    def solve(x):
        ret = 1
        for j in str(x):
            ret *= int(j)
        return ret

    if solve(a) == solve(b):
        ans = "YES"

print(ans)
