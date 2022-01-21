#include<stdio.h>
void main()
{
	int num[5],i;
	for(i=0; i<5; i++)
	{
	  scanf("%d",&num[i]);
    }
	for(i=0; i<5; i++)
	{
		printf("index %d ---> %d\n",i,num[i]);
	}
}
