#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();

cout<<"Enter the amount: ";
int amt;
cin>>amt;
int deno[6]={1000, 500, 100, 50, 10, 1};
int notes[6];

for(int i=0; i<6; i++)
{
notes[i]=amt/deno[i];
amt%=deno[i];
}

for(int j=0; j<6; j++)
 cout<<"No. of "<<deno[j]<<" rupee notes: "<<notes[j]<<endl;


getch();
}