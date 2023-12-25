#include<stdio.h>
void main()
{
 int a;
 int b;
 int c;
 a=6;
 b=7;
 c=3;
 if (a>b && a>c)
 {
  printf("a is greater than b and c\n");
  if (a%2==0)
  {
   printf("a is even");
  }
  else
  { 
   printf("a is odd");
  }  
 }
 else if (b>a && b>c)
 {
  printf("b is greater than a and c\n");
  if (b%2==0)
  {
   printf("b is even");
  }
  else
  {
   printf("b is odd");
  }
 }
 else if (c>a && c>b)
 {
  printf("c is greater than a and b\n");
  if (c%2==0)
  {
   printf("c is even ");
  }
  else
  {
   printf("c is odd");
  }
 }
}