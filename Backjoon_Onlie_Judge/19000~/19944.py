a, b = map(int, input().split())
if b == 1 or b == 2:
    print("NEWBIE!")
elif b <= a:
    print("OLDBIE!")
else:
    print("TLE!")
