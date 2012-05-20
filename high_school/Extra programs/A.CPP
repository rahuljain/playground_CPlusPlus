//This program reads a even number and displays an A-pattern

//Developed by Akshat Mathur, XI-D

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int n;
	cout<<"Enter a number for the A-pattern: ";
	cin>>n;
	for (int i = 1; i < n; i++) cout<<' ';
	cout<<'*'<<endl;
	for (int j = 2; j <= n; j++)
	{
		if (j == (n/2) + 1)
		{
			for (int l = 0; l < (n/2) - 1; l++) cout<<' ';
			for (l = 0; l <= n; l++) cout<<'*';
			cout<<endl;
		}
		else
		{
			for (int m = n - j; m > 0; m--) cout<<' ';
			cout<<'*';
			for (m = 0; m < (j*2) - 3; m++) cout<<' ';
			cout<<"*\n";
		}
	}
	getch();
}

