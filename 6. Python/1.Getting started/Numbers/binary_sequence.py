t = int(input())
while(t):
    t -= 1
    x, y, a, b = map(int,input().split())
    if (x*y == a+b):
            print('Yes')
    else:
            print('No')
