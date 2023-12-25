#include<stdio.h>
void main()
{
 int a,i=1,b=1;
 printf("Enter number:");
 scanf("%d",&a);
 while(a>0)
 {
     b=b*a;
     a--;
 }
 printf("Factorial of %d",b);
 
}
