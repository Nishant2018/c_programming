#include<stdio.h>
void swapr(int*, int*);

int main()
{
 int a;
 int b;
 a=14;
 b=16;
 swapr(&a,&b);
 printf("a=%d b=%d",a,b);
 return 0;
}

void swapr(int*x, int*y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
}