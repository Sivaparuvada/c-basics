#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("invalid marks");
	}
	else if(marks>=90 && marks<=100)
	{
		printf("0 grade");
	}
	else if(marks>=80 && marks<90)
	{
		printf("A grade");
	}
	else if(marks>=70 && marks<80);
	{
		printf("B grade");
	}
	else if(marks>=60 && marks<70)
	{
		printf("C grade");
	}
	else if(marks>=50 && marks<60);
	{
		printf("D grade");
	}
	else if(marks>=35 && marks<50)
	{
		printf("E grade");
	}
	
}
