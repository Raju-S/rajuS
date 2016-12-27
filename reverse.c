#include<stdio.h>
void main()
{
int n,m,rev=0;
printf("\n Enter the number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
rev=rev*10+m;
n=n/10;
}
printf("\n The reversed number is:%d",rev);
getch();
}
