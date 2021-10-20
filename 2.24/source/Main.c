#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("Enter a integer\nI will tell you is even or odd:");
	scanf_s("%d", &num);
	if (num % 2 == 0)printf("%d is even", num);
	if (num % 2 == 1)printf("%d is odd", num);
}