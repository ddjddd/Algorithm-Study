import sys


def cnt(a):
    return a.count('a') + a.count('e') + a.count('i') + a.count('o') + a.count('u')


while True:
    buf = str(sys.stdin.readline()).lower()
    if buf[0] == '#':
        break
    print(cnt(buf))
