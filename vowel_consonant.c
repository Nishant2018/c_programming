#include<stdio.h>
void main()
{
 char c;  
 int lowercase_vowel,uppercase_vowel;
 printf("Enter an Alphabet:");
 scanf("%c",&c);
 lowercase_vowel =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 uppercase_vowel =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 if (lowercase_vowel||uppercase_vowel)
 {
  printf("c is vowel");
 } 
 else
 {
  printf("c is consonant");
 }
}