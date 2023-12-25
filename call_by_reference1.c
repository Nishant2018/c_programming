#include<Stdio.h>
void add(int*,int*);

int main()
{
 int a;
 int b;
 a=24;
 b=30;
 
 add(&a,&b);
 printf("a=%d b=%d",a,b);
 return 0;
}
 
void add(int *x,int *y)
{
 int t;
 t=*x + *y;
 printf("t=%d\n",t);
}