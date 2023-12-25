#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    printf("Enter the sides of triangle..:");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b==c)
    {
      printf("This is Equilateral triangle ");
    }
    elseif (a==b!=c)
    {
        printf("This is Isosceles triangle");
    }
    elseif (a!=b!=c)
    {
        printf("This is Scalen triangle");
    }
    

}