#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,base,hight,area,s,p;
 int k;
 printf("Enter 1 for triangle(3 side)& 2 for triangle (base,hight):");
 scanf("%d",&k);
 switch(k)
 {
  case 1:
    printf("Enter 3 sides-a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    p=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triange=%f",area);
    break;
  case 2:
    printf("Enter base and hight:");
    scanf("%f %f",&base,&hight);
    area=(base*hight)/2;
    printf("Area of triangle=%f",area);
    break;
  default:
    printf("Enter a valid number");
 }
}