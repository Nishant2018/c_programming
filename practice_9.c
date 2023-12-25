#include<stdio.h>
void main()
{
    int m_1,m_2,m_3,m_4,m_5,Total_marks,Overall_marks,percentage;
    Total_marks=500;
    printf("Enter the marks of these subjects...:");
    scanf("%d%d%d%d%d",&m_1,&m_2,&m_3,&m_4,&m_5);
    Overall_marks=m_1+m_2+m_3+m_4+m_5;

    percentage=(Overall_marks/Total_marks)*100;

    if (percentage>=90)
    {
        printf("Grade A");
    }
    else if (percentage>=80)
    {
        printf("Grade B");
    }
    else if (percentage>=70)
    {
        printf("Grade c");
    }
    else if (percentage>=60)
    {
        printf("Grade D");
    }
    else if (percentage>=40)
    {
        printf("Grade E");
    }
    else if (percentage<40)
    {
        printf("Grade F ");
    }



}