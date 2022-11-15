import sys


p, k = map(int, sys.stdin.readline().split())
tmp = [True] * k
for i in range(2, k):
    if tmp[i]:
        for j in range(i + i, k, i):
            tmp[j] = False
prior = [i for i in range(2, k) if tmp[i]]

ans = "GOOD"
for i in prior:
    if p % i == 0:
        ans = f"BAD {i}"
        break
print(ans)