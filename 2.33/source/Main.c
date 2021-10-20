#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int miles,cost,average,fees,tolls;
	
	printf("Total miles driven per day:");
	scanf_s("%d", &miles);
	printf("Cost per gallon of gassoline:");
	scanf_s("%d", &cost);
	printf("Average miles per gallon:");
	scanf_s("%d", &average);
	printf("Parking fees per day:");
	scanf_s("%d", &fees);
	printf("Tolls per day:");
	scanf_s("%d", &tolls);
	printf("Cost per day:%d", (miles / average) * cost + fees + tolls);
	return 0;
}