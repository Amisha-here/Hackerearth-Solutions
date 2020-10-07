n = int(input())
i = 1
s = 3
while(n>=s):
    i += 1
    s = 3*((i*(i+1))/2)
i -= 1
n_left = n - (3*((i*(i+1))/2))
if(n_left >= i+1):
    print("Motu")
else:
    print("Patlu")
