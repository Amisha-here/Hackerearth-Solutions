t = int(input())
while(t):
    t -= 1
    n = int(input())
    sum = 0
    for i in range(1,n):
        if(n%i == 0):
            sum += i
    print(sum)
