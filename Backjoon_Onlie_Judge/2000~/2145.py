import sys

while True:
    a = str(sys.stdin.readline())[:-1]
    if not int(a):
        break
    while int(a)//10:
        b = 0
        for i in str(a):
            b += int(i)
        a = str(b)

    print(a)
