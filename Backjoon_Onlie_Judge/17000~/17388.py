a, b, c = map(int, input().split())
i = min(a, b, c)
if a+b+c >= 100:
    print("OK")
elif i == a:
    print("Soongsil")
elif i == b:
    print("Korea")
else:
    print("Hanyang")
