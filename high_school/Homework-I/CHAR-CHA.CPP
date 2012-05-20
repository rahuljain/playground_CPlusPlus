//This program changes the case of the character that the user wants to change in a string.
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char a, b, string[50];
cout<<"Enter the string:";
gets(string);
cout<<"Enter the char to be changed:";
cin>>a;
for(int i=0; string[i]!='\0'; i++)
{
if(string[i]==a)
 {
  if(a>='a' && a<='z')
  b=a-32;
  else
  if(a>='A' && a<='Z')
  b=a+32;

  cout<<b;
 }
else
cout<<string[i];
}
getch();
}