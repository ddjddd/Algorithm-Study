for i in range(0,3):
    A,B,C,D,E,F = map(int, input().split())
    T = 3600*D + 60*E + F - (3600*A + 60*B + C)
    print(T//3600, T%3600//60 , T%60)