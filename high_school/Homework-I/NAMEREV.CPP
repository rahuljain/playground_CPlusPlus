#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char string[50];
cout<<"Enter any string: ";
gets(string);
for(int l=0; string[l]!='\0';l++);
for(int i=l-1; i>=0; i--)
{
for(int j=l-1; j>=i; j--)
cout<<string[j];
cout<<endl;
}
getch();
}
