input = int(input())
if input % 10 != 0:
    print(-1)
else:
    a = int(input/300)
    b = int(input % 300/60)
    c = int(input % 60/10)
    print(a, b, c)
