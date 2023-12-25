//c program to check number is Armstrong or not
#include<stdio.h>
#include<math.h>

void main()
{
   int original_num,num,last_digit,digits,sum;
   printf("Enter any number to check Armstrong number:");
   scanf("%d",&num);

   sum=0;
   original_num=num;

   digits=(int) log10(num) + 1;
   while(num>0)
   {
       last_digit=num%10;
       sum=sum+ roound(pow(last_digit,digits));
       num=num/10;

   }
   if(original_num==sum)
   {
       printf("%d is Armstrong number",original_num);

   }
   else{
       printf("%d is not Armstrong",original_num);


   }
   
}