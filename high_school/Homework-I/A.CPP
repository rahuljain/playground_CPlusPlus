//This program prints out "*" in the pattern of "A".
//Program developed by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int n;
 cout<<"Enter the value of n: ";
 cin>>n;

    for(int i=1; i<=n-1 ;i++)
    cout<<" ";
    cout<<"*";
    cout<<endl;

	for(int j=2; j<=n; j++)
	     {
	       for(int k=n-2; k>=j-1; k--)
	       cout<<" ";
	       cout<<"*"<<" ";

	       for(int m=2; m<j; m++)
	       cout<<"  ";
	       cout<<"*";
	       cout<<endl;
		 }
 getch();
 }
