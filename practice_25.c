    //c program to find factorial of the number
    #include<stdio.h>
    void main()
    {
        int i,fact, num;
        printf("Enter any number to calculate factorial:");
        scanf("%d",&num);
        fact=1;

        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }  

        printf("Factorial of %d is %d",num ,fact);

    }