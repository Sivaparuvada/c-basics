#include<stdio.h>
void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%5==0 && n%7==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}	
}
