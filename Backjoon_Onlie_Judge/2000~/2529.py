import sys

n = int(sys.stdin.readline())
ans_min, ans_max = 0, 0
op_list = list(map(str, sys.stdin.readline().split()))
nums = list(range(0, 10))


def solve(idx, cur_list):
    if idx == n + 1:
        global ans_min, ans_max

        result = "".join(map(str, cur_list))
        if not ans_min:
            ans_min = result
        ans_max = result

        return

    for i in nums:
        if i not in cur_list:
            flag = False
            if idx == 0:
                flag = True
            elif op_list[idx - 1] == ">":
                if cur_list[-1] > i:
                    flag = True
            elif op_list[idx - 1] == "<":
                if cur_list[-1] < i:
                    flag = True

            if flag:
                cur_list.append(i)
                solve(idx + 1, cur_list)
                cur_list.pop()


solve(0, [])

print(ans_max)
print(ans_min)
