# back-tracking
# boj.kr/1182
import sys

n, m = map(int, sys.stdin.readline().split())
data = list(map(int, sys.stdin.readline().split()))


ans = 0


def backtracking(cur, last):
    global ans
    if not last and cur == m:
        ans += 1
    if last:
        backtracking(cur + last[0], last[1:])
        backtracking(cur, last[1:])


backtracking(0, data)
if m == 0:
    ans -= 1
print(ans)
