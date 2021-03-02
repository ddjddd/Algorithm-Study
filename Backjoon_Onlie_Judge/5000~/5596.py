A,B,C,D = map(int, input().split())
S = A+B+C+D
A,B,C,D = map(int, input().split())
T = A+B+C+D
print(S if S > T else T)