#include<stdio.h>
void main()
{
	int num[5],i;
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\n%d\n",num[3]*num[4]);
	printf("%d\n",num[1]+num[4]);
	printf("%d\n",num[2]/num[3]);
	printf("%d\n",num[1]*num[2]*num[3]);
}
