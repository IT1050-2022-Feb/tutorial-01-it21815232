/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  int dist; //declaer varible
	float amount; //declare varible
	
	printf("Input the distance the van has travelled : "); //prompt
	scanf("%d", &dist);
	
	if(dist <= 30)
	{
		amount = dist * 50; //calculate
		printf("Amount to be paid : %.2f", amount); //printf amount
	}
	else
	{
		amount = 30 * 50 + (dist - 30) * 40; //calculate
		printf("Amount to be paid : %.2f", amount); //printf amount
	}
	
}
