#include<stdio.h>
void main()
{
	int time,h,m;
	scanf("%d",time);
	h=time/60;
	m=time%60;
	printf("%d hour(s) %d minute(s)",h,m);
}

