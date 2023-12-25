#include<stdio.h>
void main()
{
   char input;
   printf("Enter the month number for seeing number of days\n. 1. January.\n 2.Fabruary.\n 3.March.\n 4.April.\n 5.May.\n 6.June.\n 7.July.\n 8.August.\n 9.September.\n 10.October.\n 11.November.\n 12.December.\n");
   scanf("%c",&input);
   while(1)
   {

       
       switch(input)
       {
           case '1':
           printf("Number of days in January is 31");
           break;

           case '2':
           printf("Number of days in February is 28");
           break;

           case '3':
           printf("Number of days in March is 31");
           break;

           case '4':
           printf("NUmber of days in April is 30");
           break;

           case '5':
           printf("Number of days in May is 31");
           break;

           case '6':
           printf("Number of days in June is 30");
           break;

           case '7':
           printf("Number of days in July is 31");
           break;

           case '8':
           printf("Number of days in August is 31");
           break;
           
           case '9':
           printf("Number of days in September is 30");
           break;

           case '10':
           printf("Number of days in October is 31");
           break;

           case '11':
           printf("Number of days in November is 30");
           break;

           case '12':
           printf("Number of days in December is 31");
           break;

           default:
           printf("You are in default");


       }
   }


}