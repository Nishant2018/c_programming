#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if (a<0)
    {
        printf("a is negative");
    }
    else if (a>0)
    {
        printf("a is positive");
    }
    else if (a==0)
    {
        printf("a is equal to zero");
    }
}