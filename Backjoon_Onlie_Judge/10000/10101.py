a = int(input())
b = int(input())
c = int(input())

if a and b and c == 60:
    print('Equilateral\n')
elif a+b+c == 180 and (a == b or b == c or a == c):
    print('Isosceles\n')
elif a+b+c == 180:
    print('Scalene\n')
else:
    print('Error\n')
