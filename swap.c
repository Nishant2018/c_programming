#include<stdio.h>
void main()
{
 int a,b,c;
 printf(“Enter two no”);
 scanf(“%d%d”,&a&b);
 c=a;
 a=b;
 b=c;
 printf(“The swapped number are %d and %d”,a,b);
}

