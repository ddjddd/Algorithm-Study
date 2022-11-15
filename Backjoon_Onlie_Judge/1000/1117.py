import sys
W, H, f, c, x1, y1, x2, y2 = map(int, sys.stdin.readline().split())


w, h = max(W-f, f), H // (c+1)

std = min((W-f, f))
ans = W*H - (max(0, min(std, x2)-x1)*2 + max(0, x2 - max(std, x1))) * (y2-y1) *(c+1)
print(ans)
