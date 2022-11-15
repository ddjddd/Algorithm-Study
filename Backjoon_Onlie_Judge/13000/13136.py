import sys
import math
a, b, c = map(float, sys.stdin.readline().split())
print(int(math.ceil(a/c) * math.ceil(b/c)))
