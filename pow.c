#include<stdio.h>
main()
{
int b,exp,result;
printf("\n Enter the base:");
scanf("%d",&b);
printf("\n Enter the  exp:");
scanf("%d",&exp);
result=pow(b,exp);
printf("\n The power of %d is:%d",b,result);
}
