#include<stdio.h>
#include<string.h>
main()
{
char c;
int lowervowel,uppervowel;
printf("\n Enter the Char:");
scanf("%c",&c);
lowervowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppervowel=(c=='A'||c=='E'||c=='I'||c=='o'||c=='U');
if(lowervowel||uppervowel)
{
printf("\n %c is vowel",c);
}
else
{
printf("\n %c is consonant",c);
}
getch();
}
