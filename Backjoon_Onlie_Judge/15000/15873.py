a = str(input())
if len(a) == 4:
    print(20)
elif len(a) == 3:
    if a[1] == '0':
        print(10+int(a[2]))
    else:
        print(10+int(a[0]))
else:
    print(int(a[0])+int(a[1]))
