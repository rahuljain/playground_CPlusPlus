#include<iostream.h>
#include<conio.h>

int power(int base, int exponent=2)
     {
	int ans=1;
	for(int i=1; i<=exponent; i++)
	ans*=base;
	return ans;
     }


void main()
{
clrscr();
char ans;
int base, exp, n;
cout<<"Enter the base : ";
cin>>base;
cout<<"Give an exponent or else the square of the number will be calculated.";
cout<<"Do you have any exponent(y/n) ?";
cin>>ans;

  if (ans=='y')
      {
	cout<<"Give the exponent: ";
	cin>>exp;
	n=power(base,exp);
      }

  else
   n=power(base);

cout<<n;
getch();

}