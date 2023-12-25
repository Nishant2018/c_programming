//c program to print ASCII values of all characters.
#include<stdio.h>
void main()
{
   int i;

   for(i=0;i<=255;i++)
   {
       printf("ASCII value of character %c = %d\n",i,i);
   }    
}