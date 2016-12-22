#include<stdio.h>
#include<string.h>
main()
{
char c;
printf("\n Enter the character:");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
{
printf("\n %c is an Alphabet.",c);
}
else
{
printf("\n %c is not a Alphabet. ",c);
}
getch();
}
