#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    while (n>=i)
    {
        printf("%d",n);
        n--;
    }
}