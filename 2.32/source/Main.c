#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float height, weight;
	printf("Enter your height in meters and weight in kilograms:");
	scanf_s("%f %f", &height, &weight);
	printf("BMI VALUES:%.2f\n", weight / (height*height));
	printf("Underweight:	less than 18.5\n");
	printf("Normal:		between 18.5 and 24.9\n");
	printf("Overweight:	between 25 and 29.9\n");
	printf("Obese:		30 or greater");
}