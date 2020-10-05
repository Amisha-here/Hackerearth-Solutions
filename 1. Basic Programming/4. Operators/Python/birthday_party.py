t = int(input())
while(t!=0) :
    n, m = map(int,input().split())
    if(m%n == 0):
        print("Yes")
    else:
        print("No")
    t -= 1
