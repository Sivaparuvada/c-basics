#include<stdio.h>
void main()
{
	float P,T,R,I;
    printf("entre three numbers");
	scanf("%f%f%f",&P,&T,&R);
	I=P*T*R/100;
	printf("simple_interest_with %f,%f and %f is %.2f",P,T,R,I);   
}
