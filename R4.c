#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter the cp and sp");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit");
	}
	else if(sp<cp)
	{
		printf("lose");
	}
	else
	{
		printf("no profit no lose");
	}
}
