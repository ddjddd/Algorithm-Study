import sys

input = list(sys.stdin.readline().strip())
ans = sum([pow(int(i), 5) for i in input])

print(ans)
