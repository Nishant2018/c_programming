#include<stdio.h>
void main()
{
  int angle_1,angle_2,angle_3;
  printf("Enter the angle of traingle:\n");
  scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
  if (angle_1+angle_2+angle_3==180)
  {
      printf("These angle are valid for the triangle");
  }
  else
  printf("These angle are not valid for the triangle");
  
}
