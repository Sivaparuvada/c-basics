#include<stdio.h>
void main()
{
	int a,b,n,l;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	n=b/a;
	b=a*(n-1)+a;
	l=n*(a+b)/2;
	printf("%d",l);
}
