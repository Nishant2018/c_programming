#include<stdio.h>
int main()
{
 int avg,sum=0;
 int i;
 int marks[5];/*array declaration*/
 
 for (i=0;i<=5;i++)
 {
     printf("Enter Marks");
     scanf("%d",&marks[i]);/*store data in array*/
 }
 
 for(i=0;i<=5;i++)
 {
    sum=sum + marks[i];/*read data from aaray*/
 }
 avg = sum/5;
 printf("Average marks=%d\n",avg);
}
 