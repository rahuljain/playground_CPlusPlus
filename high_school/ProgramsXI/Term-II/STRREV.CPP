#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
char string[50];
cout<<"Enter the string: ";
gets(string);
for(int l=0; string[l]!='\0'; l++);
cout<<endl<<"The reversed string is: "<<endl;
for(int i=l-1; i>=0; i--)
cout<<string[i];
getch();
}