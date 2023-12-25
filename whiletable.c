#include<stdio.h>
void main()
{
 int a,i=1;
 printf("Enter number:");
 scanf("%d",&a);
 while(i<=10)
 {
     printf("%d*%d=%d\n",a,i,a*i);
     i++;
 }
 
}
