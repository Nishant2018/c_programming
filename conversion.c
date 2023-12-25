/*NISHANT RAGHUWANSHI*/
/* CONVERSION PROGRAM*/

#include<stdio.h>
void main()
{
  char input;
  float kms_to_miles = 0.621371;
  float inches_to_foot = 0.0833333;
  float cms_to_inches = 0.393701;
  float pound_to_kgs = 0.453592;
  float inches_to_meters = 0.0254;
  float first,second;
 
 while(1)
 {
   printf("\nEnter the input character.\n q. to quit\n 1.kms_to_miles\n 2.inches_to_foot\n 3.cms_to_inches\n 4.pound_to_kgs\n 5.inches_to_meters\n ");
   scanf("%c",&input);
   
   switch(input)
   {
    case 'q':
    printf("quiting the programm....");
    break;
    
    case '1':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f",&first);
    second = first * kms_to_miles;
    printf("%f kms is equal to %f miles",first,second);
    break;
    
    case '2':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f",&first);
    second = first * inches_to_foot;
    printf("%f inches is equal to %f foot",first,second);
    break;
    
    case '3':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f",&first);
    second = first * cms_to_inches;
    printf("%f cms is equal to %f inches",first,second);
    break;
   
    case '4':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f",&first);
    second = first * pound_to_kgs;
    printf("%f pound is equal to %f kgs",first,second);
    break;
    
    case '5':
    printf("Enter the quanity in terms of firsrt unit\n");
    scanf("%f",&first);
    second = first *  inches_to_meters;
    printf("%f inches is equal to %f meters",first,second);
    break;
    
    default:
    printf("You enter default value");
   }
  }
}    