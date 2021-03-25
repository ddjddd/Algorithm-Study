import sys

a, b, c = map(int, sys.stdin.readline().split())
aa, bb, cc = map(int, sys.stdin.readline().split())

if b < bb or (b == bb and c <= cc):
    over = False
else:
    over = True

reta = aa-a - 1 + (0 if over else 1)
retb = aa-a + 1
retc = aa-a

print(reta)
print(retb)
print(retc)
