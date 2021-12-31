#include<stdio.h>
void main()
{
	int cp,sp,p,l;
	float perc;
	printf("enter amount of cp and sp");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit\n");
		p=sp-cp;
		perc=p*100/cp;
		printf("profit amount is:%d\n",p);
		printf("profit percentage is:%.2f\n",perc);
    }
    else
    {
    	printf("lose\n");
    	l=cp-sp;
    	perc=l*100/cp;
    	printf("lose amount is:%d\n",l);
    	printf("lose percentage is:%.2f",perc);
	}
}
