#include<stdio.h>
main()
{
float a,b,c,d;
clrscr();
printf("enter the first marks");
scanf("%f",&a);
printf("enter the second marks");
scanf("%f",&b);
printf("enter the third marks");
scanf("%f",&c);
d =(a+b+c)*100/300;
printf("PERCENTAGE = %f",d);
getch();
}