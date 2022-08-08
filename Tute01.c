/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins program execution
int main() {
	
	int mark1, mark2; //declaer varible
	float avg; //declaer varible
	
	printf("Enter subject mark 1 : "); //get user input
	scanf("%d", &mark1); //read integer
	
	printf("Enter subject mark 2 : "); //get user input
	scanf("%d", &mark2); //read integer
	
	avg = (mark1 + mark2) / (float)2; //calculation
	
	printf("Average of the two marks : %.2f", avg); //printf avg
	


  
  return 0;
}
