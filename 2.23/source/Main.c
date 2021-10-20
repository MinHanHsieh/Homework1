#include<stdio.h>
#include<stdlib.h>

int num1, num2, num3;

int main(void)
{
	printf("Enter three different numbers\nI will tell you the largest one and the smallest one:");
	scanf_s("%d %d %d", &num1, &num2,&num3);
	printf("%d %d %d\n", num1, num2, num3);
	if (num1 > num2 && num2 > num3)printf("%d is the largest one %d is the smallest one", num1, num3);
	if (num1 > num3 && num3 > num2)printf("%d is the largest one %d is the smallest one", num1, num2);
	if (num2 > num3 && num3 > num1)printf("%d is the largest one %d is the smallest one", num2, num1);
	if (num2 > num1 && num1 > num3)printf("%d is the largest one %d is the smallest one", num2, num3);
	if (num3 > num1 && num1 > num2)printf("%d is the largest one %d is the smallest one", num3, num2);
	if (num3 > num2 && num2 > num1)printf("%d is the largest one %d is the smallest one", num3, num1);
	return 0;
}