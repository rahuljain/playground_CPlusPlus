#include<stdio.h>
main()
{
float base,altitude,area;
clrscr();
printf("enter base length");
scanf("%f",&base);
printf("enter altitude");
scanf("%f",&altitude);
area = 0.5 * base * altitude;
printf("AREA = %f",area);
getch();
}
