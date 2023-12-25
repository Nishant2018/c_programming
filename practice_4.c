#include<stdio.h>
void main()
{
    char c;
    int lowercase_alphabet,uppercase_alphabet;
    printf("Enter an Alphabet:");
    scanf("%c",&c);
    lowercase_alphabet =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase_alphabet =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (lowercase_alphabet||uppercase_alphabet)
    {
        printf("Alphabet is vowel");
    }
    else
    {
      printf("Alphabet is consonant");
    }

}