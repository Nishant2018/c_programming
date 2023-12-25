#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("Entre the value of n:");
    scanf("%d",&n);
    sum=0;
    i=2;
     while(i<=n)
     {
         sum+=i;
         i=i+2;

     }
     printf("%d",sum);
}