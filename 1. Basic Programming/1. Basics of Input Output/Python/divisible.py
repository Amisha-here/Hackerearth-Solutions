n = int(input())

number = input().split()
s = ""
for i in  range(n):
    if(i<n//2):
        s += number[i][0]
    else:
        s += number[i][-1]

no = int(s)

if(no%11 == 0):
    print("OUI")
else:
    print("NON")
