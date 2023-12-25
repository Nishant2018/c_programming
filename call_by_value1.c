#include<stdio.h>
void add(int x, int y);

int main()
{
 int a;
 int b;
 a=12;
 b=21;
 add(a,b);
 printf("a=%d b=%d",a,b);
 return 0;
}
 
 void add(int x, int y)
{
 int t;
 t=x+y;
 printf("Addition of %d and %d is = %d\n",x,y,t);
}