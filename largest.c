#include<stdio.h>
main()
{
int a,b,c;
printf("\n Enter the values of a,b,c:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\n %d is greater",a);
}
if(b>c&&b>a)
{
printf("\n %d is greater",b);
}
if(c>a&&c>b)
{
printf("\n %d is greater",c);
}
getch();
}
