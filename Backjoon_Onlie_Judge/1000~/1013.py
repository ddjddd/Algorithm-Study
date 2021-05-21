import sys
import re

pattern = re.compile('(100+1+|01)+')

len = int(sys.stdin.readline())
for i in range(0, len):
    input = str(sys.stdin.readline())[:-1]
    x = pattern.fullmatch(input)
    if x != None:
        print("YES")
    else:
        print("NO")
