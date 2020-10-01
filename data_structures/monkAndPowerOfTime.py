number = int(input())
valueA = list(map(int, input().split()))
valueB = list(map(int, input().split()))

res = 0

while(len(valueA) > 0):
    while(valueA[0] != valueB[0]):
        valueA = valueA[1:] + valueA[:1]
        res += 1
    if(valueA[0] == valueB[0]):
        valueB.pop(0)
        valueA.pop(0)
        res += 1
print(res) 
