#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	while(a<b)
	{
		printf("%d ", a);
		a++;
	}
}
