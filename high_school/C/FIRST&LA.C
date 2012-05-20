#include<stdio.h>
main()
{
int a[4];
int i,sum;
printf("input 4 digit no.:");
scanf("%d",&a);
for(i=1;i<=4;i++)
{
if(i=1 || i=4)
{
sum=sum+i;
printf("sum of first and the last no is %d",sum);
}
}
getch();
}
