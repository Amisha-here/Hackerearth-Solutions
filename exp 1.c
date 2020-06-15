


#include <stdio.h>
int main()
{
  
	
	
   int first, second, add, subtract, multiply;
   float divide;
   
   printf(" 1. Write a program to that performs as calculator ( addition, multiplication, division, subtraction) \n");
 
   printf(" \nEnter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;  

   printf(" \n Sum = %d\n", add);
   printf("\n Difference = %d\n", subtract);
   printf("\n Multiplication = %d\n", multiply);
   printf("\n Division = %.2f\n", divide);
 
   return 0;
}

