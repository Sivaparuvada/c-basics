#include<stdio.h>
void main()
{  
   int n;
   printf("enter a number");
   scanf("%d",&n);
   if(n>0) 
   { 
   printf("+ve");
   }
   else if(n<0)
   {
   	printf("-ve");
   }
   else
   {
   	printf("zero");
   }
}
