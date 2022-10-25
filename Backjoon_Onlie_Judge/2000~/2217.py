import sys

n = int(sys.stdin.readline())
n_list = []
for i in range(n):
    tmp = int(sys.stdin.readline())
    n_list.append(tmp)


n_list.sort()
n_list.reverse()

global weight
weight = 0

for idx, val in enumerate(n_list):
    if weight == 0:
        weight = val
    else:
        calc = (val - n_list[idx - 1]) * idx + val
        if calc > 0:
            weight = max(weight, val * (idx + 1))

print(weight)
