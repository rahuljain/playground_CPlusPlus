#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char string[50];
cout<<"Enter the string: ";
gets(string);
int l=strlen(string), flag=1;

for(int i=0; i<l; i++)
       {
	if(string[i]!=string[l-(i+1)])
	       {
		flag=0;
		break;
	       }
       }

if(flag)
cout<<"The string is a palindrome.";
else
cout<<"The string is not a palindrome.";
getch();
}