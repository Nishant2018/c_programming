//c program to check number is prime or not
#include<stdio.h>
void main()
{
   int i,num, prime;
   prime=1;
   printf("Enter any number to check prime:");
   scanf("%d",&num);

   for(i=2;i<=num/2;i++)
   {
       if(num%i==0)
       {
           prime=0;

           break;
       }

   }

   if(prime==1 && num>1)
   {
       printf("%d is prime number",num);

   }
   else
   {
       printf("%d is composite number",num);
       
   }
}