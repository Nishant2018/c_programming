//c program to find all factor of number
#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter any number to find its factor");
    scanf("%d",&num);

    printf("All factors of %d are: \n",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
}