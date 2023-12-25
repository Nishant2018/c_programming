#include <stdio.h>

void main() 
{
 int a;
 printf("Enter number:");
 scanf("%d",&a);
 if((a&1)==0)
 printf("Entered number is even.");
 else
 printf("Entered number is odd.");
}
