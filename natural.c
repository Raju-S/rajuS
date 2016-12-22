#include<stdio.h>
main()
{
int n,i,sum=0;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum of %d is :%d",n,sum);
getch();
}
