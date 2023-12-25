#include<stdio.h>
void main()
{
   char input;
   int amount;
   printf("Enter the amount:");
   scanf("%d",&amount);
   while(1)
   {
     printf("Enter the input character.\n 1. 10 rupees note.\n 2. 50 rupees note.\n 3. 100 rupees note.\n 4. 500 ruppes note.\n 5. 2000 rupees note.");
     scanf("%c",&input);

     switch (input)
     {
       case '1':
       printf("Number of 10 ruppes note is %d:",amount/10);
       break;

       case '2':
       printf("Number of 50 ruppes note is %d:",amount/50);
       break;
        
       case '3':
       printf("Number of 100 ruppes note is %d:",amount/100);
       break;
      
       case '4':
       printf("Number of 500 ruppes note is %d:",amount/500);
       break;

       case '5':
       printf("Number of 2000 ruppes note is %d",amount/2000);
       break;

       default :
       printf("you are in default ");


     }

     

   }
     
   
}