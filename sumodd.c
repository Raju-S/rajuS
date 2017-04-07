#include<stdio.h>
int main()
{
int sum=0,sum1=0,i,j;
for(i=1;i<=15;i++)
{
sum=sum+i;
}
printf("The sum from 1-15 is : %d\n",sum);
for(j=15;j<=45;j=j+2)
{
sum1=sum+i;
}
printf("The odd number from 15-45 is : %d",sum1);
return 0;
}
