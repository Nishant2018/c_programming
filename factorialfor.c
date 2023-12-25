#include<stdio.h>
void main()
{
 int n,i,fact;
 printf("Enter the number:");
 scanf("%d",&n);
 
 if(n==0)
 {
  printf("factorial of 0 is 1\n");
 }
 else
 {
  fact=1;
  for(i=1;i<=n;i++)
   fact=fact*i;
  printf("Factorial of %d is %d",n,fact);
 }
}