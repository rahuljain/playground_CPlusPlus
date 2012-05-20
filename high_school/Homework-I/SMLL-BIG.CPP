#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char ch;
while((ch=getchar())!='\n')
{
if(ch>='A' && ch<='Z')
{
ch+=32;
cout<<ch;
}
else
if(ch>='a' && ch<='z')
{
ch-=32;
cout<<ch;
}
else
cout<<"Not an alphabet." ;
}
getch();
}