#include<stdio.h>
main()
{
float pie,r,circum;
clrscr();
pie = 3.14;
printf("enter radius");
scanf("%f",&r);
circum = 2 * pie * r;
printf("CIRCUMFERENCE = %f",circum);
getch();
}
