#include<stdio.h>
void main()
{
   int total_multiply,i,n;
   printf("Entre the value of n:");
   scanf("%d",&n);
   total_multiply=1;
   i=1;

   while(i<=n)
   {
       total_multiply*=i;
       i++;
   }
   printf("total multiply is %d",total_multiply);

}