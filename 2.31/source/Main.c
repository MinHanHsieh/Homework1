#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	printf("number	square	cube\n");
	for(int i=0;i<=10;i++)
	{
		printf("%d	%d	%d\n", i, i*i, i*i*i);
	}
	return 0;
}