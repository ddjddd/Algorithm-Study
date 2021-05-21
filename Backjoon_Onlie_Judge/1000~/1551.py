import sys

n, k = map(int, sys.stdin.readline().split(" "))
a = []
a = list(sys.stdin.readline()[:-1].split(","))
a = [int(i) for i in a]

for i in range(0, k):
    ans = []
    for j in range(1, len(a)):
        ans.append(a[j] - a[j-1])

    a = [i for i in ans]

astr = str(a[0])
for j in range(1, len(a)):
    astr += f",{a[j]}"
print(astr)
