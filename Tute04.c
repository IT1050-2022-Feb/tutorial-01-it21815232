/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//funtion prototype
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
	
   int no1, no2;
   
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   printf("%d ", minimum(no1, no2));//function calling
   
   printf("%d ", maximum(no1, no2));//function calling
   
   printf("%d ", multiply(no1, no2));//function calling
   
   
   return 0;
}
int minimum(int no1, int no2)
{
	if( no1 < no2)
	{
		return no1; //return value to function
	}
	else
	{
		return no2; //return value to function
	}
}
int maximum(int no1, int no2)
{
	if( no1 > no2)
	{
		return no1; //return value to function
	}
	else
	{
		return no2; //return value to function
	}
}
int multiply(int no1, int no2)
{
	return no1 * no2; //return value to function
}
