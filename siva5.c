# include<stdio.h>
void main()
{
	float r,pi,area,per;
	scanf("%f",&r);
	pi=3.14;
	area=pi*r*r;
	per=2*pi*r;
	printf("area of circle with radius %.0f is %.2f\n",r,area);
	printf("perimeter of circle with radius %.0f is %.2f",r,per);
}
