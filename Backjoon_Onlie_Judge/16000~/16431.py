import sys
bx, by = map(int, sys.stdin.readline().split())
dx, dy = map(int, sys.stdin.readline().split())
jx, jy = map(int, sys.stdin.readline().split())

bd = max(abs(jx-bx), abs(jy-by))
dd = abs(jx-dx) + abs(jy-dy)
if bd < dd:
    print('bessie')
elif dd < bd:
    print('daisy')
else:
    print('tie')
