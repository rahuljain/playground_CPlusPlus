#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
void main()
{
clrscr();
int space=0;
char string[50];
gets(string);
for (int i=0; string[i]!='\0'; i++)
if (string[i]==' ')space++;
cout<<space;
getch();
}


