#include<stdio.h>
main()
{
int i,a;
clrscr();
printf("enter any no.:");
scanf("%d",&a);
printf("TABLE OF %d",a);
printf("\n");
for(i=a;i<=a*10;i=i+a)
{
printf("%d",i);
printf("\n");
}
getch();
}

