#include<stdio.h>
main()
{
int a,b,c,d;
clrscr();
printf("Enter The First No.:");
scanf("%d",&a);
printf("Enter The Second No.:");
scanf("%d",&b);
printf("Enter The Third No.:");
scanf("%d",&c);
if(a>c)
{
d=a;
}
else
{
d=b;
}
if(c>d)
{
printf("The greatest no.is: %d",c);
}
else
{
printf("The greatest no. is: %d",d);
}
getch();
}



