#include<stdio.h>
void main()
{
 int num=0;
 while(num<=100)
 {
  printf("Value of variable num is:%d\n",num);
  if (num==0)
  {
   break;
  }
  num++;
 }
 printf("Out of while loop");
}