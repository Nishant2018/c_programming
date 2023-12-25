#include<stdio.h>
void main()
{
 int a,i=1,b=0;
 printf("Enter number:");
 scanf("%d",&a);
 while(a>0)
 {
     b=b+a;
     a--;
 }
 printf("Summation of %d",b);
 
}
