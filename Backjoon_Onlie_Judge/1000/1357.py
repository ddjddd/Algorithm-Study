import sys

a, b = map(str, sys.stdin.readline().split(" "))

reva = int("".join(reversed(a)))
revb = int("".join(reversed(b)))
print(int("".join(reversed(str(reva+revb)))))