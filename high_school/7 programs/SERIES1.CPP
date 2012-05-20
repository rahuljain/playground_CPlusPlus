/* THIS PROGRAM FINDS THE SUM OF THE SERIES
	1 + x(squared)/2! - x(cubed)/3! +....+/- x(raised to power n)/n!
	PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 int x,n;
 float sum=1;
 int fact;
 cout<<"Please give the value of x:";
 cin>>x;
 cout<<"Please give value of n:";
 cin>>n;
 for(int i=2 ; i<=n ; i++)
  {
	fact=1;
	for(int j=2 ; j<=i ; j++)
	fact*=j;
	if (i%2==0)
		sum+=pow(x,i)/fact;
	else
		sum-=pow(x,i)/fact;
  }
 cout<<"The sum of the given series is "<<sum;
 getch();
}
/*
OUTPUT:
Please give the value of x:3
Please give value of n:4
The sum of the given series is 4.375
*/