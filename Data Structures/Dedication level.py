lst = []
for i in range(int(input())):
    x = input().split()
    lst.append((x[0], int(x[1])))
lst = sorted(lst, key= lambda x: x[1], reverse=True)
print (lst[0][0])
print (lst[1][0])
print (lst[2][0])
