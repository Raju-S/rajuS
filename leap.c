#include<stdio.h>
main()
{
int year;
printf("\n Enter the year:");
scanf("%d",&year);
if(year%400==0)
{
printf("\n %d is a leap year",year);
}
else if(year%100==0)
{
printf("\n %d is not a leap year ",year);
}
else if(year%4==0)
{
printf("\n %d is leap year ",year);
}
else
{
printf("\n %d is no a leap year ",year);
}
getch();
}
