#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	
	int num[size],i;
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<size; i++)
	{
		if(i%2 == 0)
		{
			printf("%d ", num[i]);
		}
	}
}
