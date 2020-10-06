for _ in range(int(input())):
    n = int(input())
    line = 2*n
    for i in range(n,0,-1):
        has = 2*i-2
        star = (line-has)//2
        s = "*"*star + "#"*has + "*"*star
        print(s)
    print()
