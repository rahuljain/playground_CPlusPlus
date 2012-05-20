/* This program finds the sum of the series 1+(1+2)+(1+2+3)+....+(1+2+3+..+n)
	Program developed by Ankit Jain.
*/
#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 int sum=0;
 cout<<"Please enter the value of n:";
 cin>>n;
 for(int i=1 ; i<=n ;  i++)
  {
	int term=0;
	for(int j=1; j<=i ; j++)
	term+=j;
	sum+=term;
  }
 cout<<sum;
 getch();
}

/*
OUTPUT:
Please enter the value of n:3
10
*/