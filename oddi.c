#include<stdio.h>
main()
{
int a,b,c;
printf("\n Enter the number:");
scanf("%d %d",&a,&b);
for(c=a;c<=b;c++)
if(c%2!=0)
    {
    printf("%d\t",c);
    }
}
