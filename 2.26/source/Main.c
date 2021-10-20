#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int num1, num2;
	printf("Enter two integers\nI will tell you whether the first is a multiple of the second:");
	scanf_s("%d %d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		printf("%d is a multiple of %d", num1, num2);
	}
	else printf("%d is not a multiple of %d", num1, num2);
}