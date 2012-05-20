//This program finds out the number of digits in a given number.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 long int n;
 cout<<"Enter any number upto 9 digits: ";
 cin>>n;
 int num=0;
	while(n>0)
	   {
	      num=num++;
	      n=n/10;
	   }
 cout<<num;
 getch();
}