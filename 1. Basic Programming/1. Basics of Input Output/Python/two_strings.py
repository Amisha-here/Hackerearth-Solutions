for _ in range(int(input())):
    a, b = input().split()
    a = "".join(sorted(a))
    b = "".join(sorted(b))
    if(a  == b):
        print("YES")
    else:
        print("NO")
