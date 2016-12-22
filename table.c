#include<stdio.h>
main()
{
int a,b;
printf("\n Enter the table:");
scanf("%d",&a);
for(b=1;b<=10;b++)
{
printf("\n%d * %d = %d",b,a,a*b);
}
}
