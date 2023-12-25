#include<stdio.h>
void mult(int x, int y);

int main()
{
 int a;
 int b;
 a=15;
 b=14;
 
 mult(a,b);
 printf("a=%d b=%d",a,b);
 return 0;
}

void mult(int x, int y)
{
 int t;
 t=x*y;
 printf("t=%d\n",t);
}