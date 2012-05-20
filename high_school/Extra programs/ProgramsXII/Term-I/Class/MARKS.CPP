#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class stu
{
int roll;
char name[10];
float marks[5];
float per,sum;

public:
void read()
	{
	  cout<<"Enter the roll no. :";
	  cin>>roll;

	  cout<<"Enter the name: ";
	  gets(name);

	  sum=0;
	  for(int i=0; i<5; i++)
		{
		  cout<<"Enter the marks of the "<<i+1<<" subject: ";
		  cin>>marks[i];
		  sum+=marks[i];
		}
	}

void calc_per()
	{
	 per=(sum/500)*100;
	}

void print()
	{
	  cout<<roll<<'\t'<<name<<'\t'<<per<<endl;
	}
};


void main()
{
 clrscr();
 stu s1[10];
 int n;
 cout<<"How many students? ";
 cin>>n;
 for(int i=0; i<n; i++)
       {
	 s1[i].read();
	 s1[i].calc_per();
	 s1[i].print();
       }
 getch();
}
