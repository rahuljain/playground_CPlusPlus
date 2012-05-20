#include<stdio.h>
main()
{
int a,b,c,g;
clrscr();
printf("FIRST NUMBER : ");
scanf("%d",&a);
printf("SECOND NUMBER : ");
scanf("%d",&b);
printf("THIRD NUMBER : ");
scanf("%d",&c);
if(a>b)
{
g=a;
}
else
{
g=b;
}
if(c>g)
{
printf("%d is greater",c);
}
else
{
printf("%d is greater",g);
}
getch();
}
