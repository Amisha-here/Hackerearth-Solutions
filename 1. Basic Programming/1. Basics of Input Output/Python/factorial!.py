n = int(input()) # n is the input in integer

fact = 1
for i in range(1,n+1): #loop to iterate through 1 to n
    fact *= i

print(fact)         #printing factorial of n
