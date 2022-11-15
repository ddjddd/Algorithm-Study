import sys
from itertools import product


month = ["January", "February", "March", "April", "May", "June",
         "July", "August", "September", "October", "November", "December"]
monthDay = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


m, d, y, t = map(str, sys.stdin.readline().split(" "))

y = int(y)
elipse = ((y % 400 == 0) or (y % 4 == 0 and y % 100 != 0))
monthDay[1] += int(elipse)

m = month.index(m)
d = sum(monthDay[:m]) + int(d[:-1])-1

t = int(t[:2])*60 + int(t[3:])

total = (365+int(elipse)) * 1440
tmp = d * 1440 + t

print(tmp/total*100)
