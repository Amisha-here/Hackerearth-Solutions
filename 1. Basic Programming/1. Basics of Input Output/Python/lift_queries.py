t = int(input())
a = 0
b = 7
while(t):
    t -= 1
    f = int(input())
    if(abs(f-a)<abs(f-b)):
        a = f
        print("A")
    elif(abs(f-a)>abs(f-b)):
        b = f
        print("B")
    else:
        if(a<b):
            a = f
            print("A")
        if(b<a):
            b = f
            print("B")
