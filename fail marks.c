#include<stdio.h>
void main()
{
	int mtm,psm,chm,csm;
	printf("enter marks");
	scanf("%d %d %d %d",&mtm,&psm,&chm,&csm);
	if(mtm<35)
	{
		printf("failed in maths\n");
    }
    if(psm<35)
    {
    	printf("failed in physics\n");
	}
	if(chm<35)
	{
		printf("failed in chemistry\n");
	}
    if(csm<35)
	{
		printf("failed in computer science");
	}
}
