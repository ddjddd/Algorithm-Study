import sys


n = int(sys.stdin.readline())
arr = [int(i) for i in sys.stdin.readline()[:-1].split(" ")]

edgeList = [
    arr[0] + arr[1],
    arr[0] + arr[2],
    arr[0] + arr[3],
    arr[0] + arr[4],
    arr[1] + arr[2],
    arr[1] + arr[3],
    arr[4] + arr[2],
    arr[4] + arr[3],
    arr[5] + arr[1],
    arr[5] + arr[2],
    arr[5] + arr[3],
    arr[5] + arr[4],
]

cornerList = [
    arr[0] + arr[1] + arr[2],
    arr[0] + arr[1] + arr[3],
    arr[0] + arr[4] + arr[2],
    arr[0] + arr[4] + arr[3],
    arr[5] + arr[1] + arr[2],
    arr[5] + arr[1] + arr[3],
    arr[5] + arr[4] + arr[2],
    arr[5] + arr[4] + arr[3],
]

if n == 1:
    print(sum(arr) - max(arr))
else:
    len = n-2
    if len < 0:
        len = 0

    minPlane = min(arr)*(len*len*5 + len*4)
    minEdge = min(edgeList)*(len*8+4)
    minCorner = min(cornerList)*4

    print(minPlane + minEdge + minCorner)
