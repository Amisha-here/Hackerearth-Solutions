l,r,k = map(int,input().split()) #assigned  the inputs to l,r,k

count = 0

for i in range(l,r+1): #iterate from l to r(inclusive)
    if(i%k == 0):      #checking if it is divible by k
        count += 1

print(count)
