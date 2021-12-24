#include<stdio.h>
void main()
{
	int time,hours,min;
	scanf("%d",&time);
	hours=time/60;
	min=time%60;
	printf("%d hour(s) %d minute(s)",hours,min);
}
