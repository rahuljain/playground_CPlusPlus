#include<stdio.h>
main()
{
int i,j;
clrscr();
i=1;
while(i<=20)
{
printf("enter any no.:");
scanf("%d",&j);
{
if(j%2==0)
{
printf("even");
printf("\n");
}
else
{
printf("odd");
printf("\n");
}
i++;
}
}
getch();
}
