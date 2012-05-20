//This program prints a string in a right-triangular manner
//Program created by Rahul Jain.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char string[50];
cout<<"Enter a string:";
gets(string);
for(int l=0; string[l]!='\0'; l++);
for(int i =0 ;i<l; i++)
{
for(int j=0; j<=i; j++)
cout<<string[j];
cout<<endl;
}
getch();
}
