#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter three number");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b&&a>c)
 {
  printf("%d is greater than %d and %d\n",a,b,c); 
   if((a%2==0))
     {
       printf("%d is even number",a);
     }
       else
     {
       printf("%d is odd number",a);
     }
   
 }
 if(b>a&&b>c)
 {
  printf("%d is greater than %d and %d\n",b,a,c);
  if((b%2==0))
    {
     printf("%d is even number",b);
    }
     else
     {
      printf("%d is odd number",b);
     }
 }
 if(c>a&&c>b)
 {
  printf("%d is greater tha %d and %d\n",c,a,b);
  if((c%2==0))
    {
     printf("%d is even number",c);
    }
     else
     {
      printf("%d is odd number",c);
     }
 }
}