#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int no, index=0;
cout<<"Enter any number: ";
cin>>no;
char hexa[50];
int noo=no;
while(no>0)
{
int r=no%16;
if(r<10)
{
hexa[index]=r+48;
index++;
}
if(r>9 && r<=15)
{
hexa[index]=r+55;
index++;
}
no=no/16;
}
hexa[index]='\0';
cout<<strrev(hexa);
getch();
}