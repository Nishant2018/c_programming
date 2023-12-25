#include<stdio.h>
void main()
{
 int i=3;
 int *j;
 j=&i;
 printf("Address of i = %u\n",&i);
 printf("Address of i = %u\n",j);
 printf("Address of j = %u\n",&j);
 printf("Value of j = %u\n",j);
 printf("Value of i = %d\n",i);
 printf("Value of i = %d\n",*(&i));
 printf("Value of i = %d\n",*j);
}