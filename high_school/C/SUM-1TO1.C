#include<stdio.h>
main()
{
int i,sum;
clrscr();
sum = 0;
for(i=1;i<=100;i++)
{
sum = sum + i;
}
printf("SUM OF ALL NUMBERS FROM 1 TO 100 = %d",sum);
getch();
}
