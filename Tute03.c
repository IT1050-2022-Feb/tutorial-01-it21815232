/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
	
	int number, sum, n; //declare varible
	
	sum = 0; //assing value
	
	printf("Enter Number : ");//Get user input 
	scanf("%d", &number);
	
	for(n = 1; n <= number; n++) //loop
	{
		sum += n; //calculation
	}
	
	printf("Sum = %d", sum);//printf sum
	
	
  
  return 0;
}
