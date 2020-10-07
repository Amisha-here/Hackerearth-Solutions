x, k = input().split(' ')
k = int(k)

xlist = list(x)
index = 0
while(k > 0):
        if xlist[index] != '9':
                xlist[index] = '9'
                k-=1
        
        index += 1
        if index > len(xlist):
                break

x = "".join(xlist)
print('%s' % x)