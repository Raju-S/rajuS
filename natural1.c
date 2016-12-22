#include<stdio.h>
main()
{
int n,i,sum=0;
printf("\n Enter the number:");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;
i++;
}
printf("\n The sum of %d is :%d",n,sum);
getch();
}
