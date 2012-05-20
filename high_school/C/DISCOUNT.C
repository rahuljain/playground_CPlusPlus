
#include<stdio.h>
main()
{
float price,amount;
clrscr();
printf("INPUT PRICE : ");
scanf("%f",&price);
if(price>=100 && price<=300)
{
printf("PRICE       : %f",price);
printf("\n");
printf("DISCOUNT    : 10 percent");
printf("\n");
printf("DISCOUNT    : %f",10*price/100);
amount =price-((10*price)/100);
printf("\n");
printf("NET PRICE   : %f",amount);
}
if(price>300 && price<=700)
{
printf("PRICE       : %f",price);
printf("\n");
printf("DISCOUNT    : 15 percent");
printf("\n");
printf("DISCOUNT    : %f",15*price/100);
amount =price-((15*price)/100);
printf("\n");
printf("NET PRICE   : %f",amount);
}
if(price>700 && price<=1000)
{
printf("PRICE       : %f",price);
printf("\n");
printf("DISCOUNT    : 20 percent");
printf("\n");
printf("DISCOUNT    : %f",20*price/100);
amount =price-((20*price)/100);
printf("\n");
printf("NET PRICE   : %f",amount);
}
if(price>1000)
{
printf("PRICE       : %f",price);
printf("\n");
printf("DISCOUNT    : 25 percent");
printf("\n");
printf("DISCOUNT    : %f",25*price/100);
amount =price-((25*price)/100);
printf("\n");
printf("NET PRICE   : %f",amount);
}
getch();
}


