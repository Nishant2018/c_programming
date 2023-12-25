// c program to print hollow square star pattern

#include<stdio.h>
void main()
{
    int i,j,N;

    printf("Enter number of rows:");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(i==1|| i==N|| j==1|| j==N)
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
        }
        printf("\n");
    }
}