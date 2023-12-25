#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter the number:");
 scanf("%d %d %d",&a,&b,&c);
 if (a>b&&a>c)
  {
    printf("a is greater value");
  }
   else if (b>a&&b>c)
  {
    printf("b is greater value");
  }
   else if (c>a&&c>b)
  {
    printf("c is greater value");
  }
}