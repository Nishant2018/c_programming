#include<stdio.h>
void areaperi(int, float*,float*);

int main()
{
 int radius;
 float area , perimeter;
 
 printf("Enter radius of a circle");
 scanf("%d",&radius);
 areaperi(radius,&area,&perimeter);
 
 printf("Area = %f\n",area);
 printf("Perimeter = %f\n",perimeter);
 return 0;
}

areaperi(int r,float*a,float*b)

{
 *a=3.14*r*r;
 *b=2*3.14*r;
}