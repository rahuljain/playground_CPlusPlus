#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class X
{
int sub_code;
char sub_name[20];
float max_marks;

void print()
{
cout<<"\nSubject code: "<<sub_code;
cout<<"\nSubject name: "<<sub_name;
cout<<"\nMax. marks: "<<max_marks;
}

public:

void read()
{
cout<<"\n\nEnter the subject code:";
cin>>sub_code;

cout<<"Enter the subject name:";
gets(sub_name);

cout<<"Enter the maximum marks:";
cin>>max_marks;

clrscr();
print();
getch();
clrscr();
}

};


void main()
{
clrscr();
X S[20];
int n;
cout<<"How many subjects :";
cin>>n;

for(int i=0; i<n; i++)
S[i].read();


getch();
}