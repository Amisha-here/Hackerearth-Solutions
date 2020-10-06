"""
 This script calculates the nth fibonacci
 number by calling the same method 
 over and over again (recursively)
"""

def fibonacci(n):
   if n <= 1:
       # If the number is less than or equal to 1, return itself
       # (breaks the recursion)
       return n
   else:
       # Else return the addition of 2 previous numbers in the fibonacci sequence
       return(fibonacci(n-1) + fibonacci(n-2))

if __name__ == "__main__":
    # Calculate first 20 numbers in the fibonacci sequence
    for i in range(20):
        print(f'{i}. fibonacci number:{fibonacci(i)}')
    