#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>
void main()
{
clrscr();
int n;
char st[50][30], temp[20];
cout<<"How many names do you want to enter? ";
cin>>n;
cout<<"Enter the names:"<<endl;
for(int i=0; i<n; i++)
gets(st[i]);

for(i=0; i<n-1; i++)
for(int j=i+1; j<n; j++)
   {
	int x=strcmp(st[i], st[j]);
	if(x>0)
	   {
		strcpy(temp, st[i]);
		strcpy(st[i], st[j]);
		strcpy(st[j], temp);
	   }
   }

cout<<endl<<"The names in sorted order are: "<<endl;
for(i=0; i<n; i++)
cout<<i+1<<setw(10)<<st[i]<<endl;
getch();
}