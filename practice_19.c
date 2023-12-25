#include<stdio.h>
void main()
{
   int n, num, rev;
   rev=0;
   printf("Enter any number to check palindrom:");
   scanf("%d",&n);

   num=n;
   while(n!=0)
   {
       rev= (rev*10)+(n%10);
       n/=10;
   }

   if(rev==num)
   {
       printf("%d is palindrom.",num);

   }
   else
   {
       printf("%d is not palindrome.",num);
   }

}