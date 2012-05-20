#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
char string[50];
cout<<"Please enter a string and the no. of spaces will be printed."<<'\n';
gets(string);
int space=0;
int i=0;
x: if (string[i]=='\0') {
			 cout<<"The number of spaces are: "<<space;
			 getch();
			 exit(0);
			}
   if (string[i]==' ')space++;
   i++;
goto x;
}
