#include<stdio.h>
main()
{
int i,a,b;
clrscr();
printf("input no.:");
scanf("%d",&a);
printf("input no.:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
getch();
}