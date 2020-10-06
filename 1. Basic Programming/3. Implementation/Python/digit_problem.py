x, k = input().split(' ')

xlist = list(x)

for index in range(int(k)):
    if len(x) > index:
        xlist[index] = '9'

x = "".join(xlist)
print('%s' % x)