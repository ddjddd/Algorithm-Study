import sys

for j in range(0, 3):
    tc = int(sys.stdin.readline())
    sum = 0
    for i in range(0, tc):
        a = int(sys.stdin.readline())
        sum += a

    if sum > 0:
        print('+')
    elif sum < 0:
        print('-')
    else:
        print('0')
