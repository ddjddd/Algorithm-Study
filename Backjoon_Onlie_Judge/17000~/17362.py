a = int(input())
a %= 8
if a == 1:
    print(1)
elif a == 2 or a == 0:
    print(2)
elif a == 3 or a == 7:
    print(3)
elif a == 4 or a == 6:
    print(4)
else:
    print(5)
