import sys

n = int(sys.stdin.readline())

for i in range(n):
    buf = str(sys.stdin.readline()).rstrip().split()
    ret = []
    for word in buf:
        w = list(word)
        w.reverse()
        ret.append("".join(w))

    print(" ".join(ret))
