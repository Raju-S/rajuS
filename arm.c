#include<stdio.h>
main()
{
int n,sum,m;
printf("\n Enter the number:");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
sum+=(m*m*m);
n=n/10;
}
if(n==sum)
{
printf("\n  ARMSTRONG NUMBER.");
}
else
{
printf("\nnot a ARMSTRONG NUMBER.");
}
getch();
}
