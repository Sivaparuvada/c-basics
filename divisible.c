#include<stdio.h>
void main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n%1==0)
	{
		printf("divisible by 1\n");
	}
	if(n%2==0)
	{
		printf("divisible by 2\n");
	}
	if(n%3==0)
	{
		printf("divisible by 3\n");
	}
	if(n%4==0)
	{
		printf("divisible by 4\n");
	}
	if(n%5==0)
	{
		printf("divisible by 5");
	}
}
