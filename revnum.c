#include<stdio.h>
int main()
{
int n,m,rev=0;
printf("Enter the number : ");
scanf("%d",&n);
while(n>0)
{
m=n%10;
rev=rev*10+m;
n=n/10;
}
printf("The reversed number is : %d",rev);
return 0;
}
