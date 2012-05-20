/*

Read an Array of structure with:-
a)School code
b)School name
c)No. of students in the school.

Perform the following operations:-
1. Sort either by code or by name as per the user choice.
2. Search for a either a School code or School name as per the user
   choice.
3. Create an another array having the same structure and merge the
   arrays.
4. Display the arrays.
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>

struct
{
 int code;
 char School_name[30];
 int number;
}School[20],temp,Tomerge[20];

void read(int);
void Sort(int );
	void sort1(int );
	void sort2(int );
void Search(int );
	void search1(int );
	void search2(int );
void Merge(int);
void display(int);

void main()
{
 int n,n1;
 cout<<"No. of school to be entered : ";
 cin>>n;

 read(n);

 char ch;
 Start:
 n=n1;

 clrscr();

 cout<<endl<<endl;
 cout<<"1. Sort."<<endl;
 cout<<"2. Search."<<endl;
 cout<<"3. Merge."<<endl;
 cout<<"4. Display."<<endl;

 cout<<"Input any number : ";
 cin>>ch;

 switch(ch)
 {
  case '1' :Sort(n1);   	goto Start;
  case '2' ://Search(n1);  	goto Start;
  case '3' ://Merge(n1);   	goto Start;
  case '4' :display(n1); 	goto Start;
  case '5' :exit(0);
 }
 getch();
}

void read(int n)
{
 clrscr();
 for(int i=0;i<n;i++)
 {
  cout<<"School : -"<<endl;
  cout<<"School Code : -";	cin>>School[i].code;
  cout<<"School Name : -";	cin>>School[i].School_name;
  cout<<"No. of students : -";  cin>>School[i].number;
 }
}

void Sort(int n)
{
 char ch;
 cout<<endl<<endl;
 cout<<"1. Sort accoring to School Code"<<endl;
 cout<<"2. Sort accoring to School Name"<<endl;
 ch=getch();

 if(ch=='1')            sort1(n);
 else                   sort2(n);
}

	void sort1(int n)
	{
	 int small,pos;

	 for(int i=0;i<n;i++)
	 {
	  small=School[i].code;

	  for(int j=i+1;j<n;j++)
	  if (School[j].code<small)	{
					  small=School[j].code;
					  pos=j;
					}
	 }

	 temp=School[i];
	 School[i]=School[pos];
	 School[pos]=temp;

	 display(n);
	}

	void sort2(int n)
	{
	 int tmp,ctr=0;

	 for(int i=0;i<n;i++)
	 {
	  for(int j=0;j<n-i-1;j++)
	  if(strcmp(School[j].School_name,School[j+1].School_name)>0)
		{
		 temp=School[i];
		 School[i]=School[i];
		 School[i]=temp;
		}
	 }
	}































































































































































































/*








void Search(int n)
{

 char ch;
 cout<<"1. Search accoring to School Code.";
 cout<<"2. Search accoring to School Name.";
 ch=getch();

 if(ch=='1')            search1(n);
 else                   search2(n);
}




*/




void display(int n)
{
 clrscr();
 for(int i=0;i<n;i++)
 {
  cout<<"School : -"<<endl;
  cout<<"School Code : -";	cout<<School[i].code<<endl;
  cout<<"School Name : -";	cout<<School[i].School_name<<endl;
  cout<<"No. of students : -";  cout<<School[i].number<<endl;
 }
}
