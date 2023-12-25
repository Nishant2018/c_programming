#include<stdio.h>
void main()
{
    int sum,sum_1,i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=0;
    i=1;

    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    sum_1=sum+1;
    printf("Sum of first and last term is %d",sum_1);
}