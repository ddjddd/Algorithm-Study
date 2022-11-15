a, b, c = map(int, input().split())
ret = a*b-c
if ret < 0:
    ret = 0
print(ret)
