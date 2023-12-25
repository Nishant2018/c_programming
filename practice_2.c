#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if ((a%5==0)&&(a%11==0))
    {
        printf("a is divisible by 5 as well as 11 both");
    }
    else 
    {
        printf("a is not divisible by 5 and 11");
    }
}