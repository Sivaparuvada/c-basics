#include<stdio.h>
void main()
{
	int unit;
	float amt,surcharge;
	printf("enter units");
	scanf("%d",&unit);
	if(unit<=199)
	{
		amt=unit*1.20;
		printf("amount of charge:%.2f\n",amt);
	}
	else if(unit>=200 && unit<400)
	{
		amt=unit*1.50;
		printf("amount of charge:%.2f\n",amt);
	}
	else if(unit>=400 && unit<600)
	{
		amt=unit*1.80;
		printf("amount of charge:%.2f",amt);
	} 
	else if(unit>=600)
	{
		amt=unit*2;
		printf("amount of charge:%.2f",amt);
	}
}
