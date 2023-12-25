#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i=1;
    sum=0;

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
}
