#include<stdio.h>
main()
{
int i,fact;
clrscr();
printf("input no.:");
scanf("%d",&fact);
for(i=1;i<=10;i++);
{
fact=fact*i;
printf("%d",fact);
printf("\n");
}
getch();
}


