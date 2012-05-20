#include<stdio.h>
main()
{
float a;
clrscr();
printf("Enter The Price:");
scanf("%f",&a);
if(a>=100 && a<300)
{
printf("Your Discount=10%");
printf("\n");
printf("Net Price=%f",a-(a/100*10));
}
if(a>=300 && a<700)
{
printf("Your Discount=15%");
printf("\n");
printf("Net Price=%f",a-(a/100*15));
}
if(a>=700 && a<1000)
{
printf("Your Discount=20%");
printf("\n");
printf("Net Price=%f",a-(a/100*20));
}
if(a>=1000)
{
printf("Your Discount=25%");
printf("\n");
printf("Net Price=%f",a-(a/100*25));
}
getch();
}