import sys

input = int(sys.stdin.readline())
for i in range(0, input):
    str = sys.stdin.readline().strip()
    print(f"{str[0]}{str[-1]}")
