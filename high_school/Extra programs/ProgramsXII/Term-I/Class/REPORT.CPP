#include<iostream.h>
#include<conio.h>
#include<stdio.h>

const int len=30;

class Person
{
char name[len];
int age;

public:

void read1()
{
cout<<"Enter your name: ";
gets(name);

cout<<"Enter the age: ";
cin>>age;
}

void print1()
{
cout<<"\nName: "<<name;
cout<<"\nAge: "<<age;
}

};

class Student:public Person
{
int roll;
float avmarks;

public:

void read2()
{
read1();
cout<<"\nEnter the roll no.: ";
cin>>roll;
cout<<"Enter the average marks: ";
cin>>avmarks;
}

void print2()
{
cout<<"\nAverage Marks: "<<avmarks;
}

float average()
{
return avmarks;
}

};



class Graduate_Student: public Student
{
char subject[len], employed;

public:

void read3()
{
read2();
cout<<"Enter the main subject: ";
gets(subject);
cout<<"Employed? (y/n)";
cin>>employed;
}

void print3()
{
cout<<"Main subject: "<<subject;
}

char emp()
{
return employed;
}

};

void main()
{
clrscr();
Graduate_Student ob[30];

int n, year, working=0, div1=0, no;
cout<<"How many students? ";
cin>>n;

cout<<"Year: ";
cout<<year;

for(int i=0; i<n; i++)
{
ob[i].read3();

float highest=ob[0].average();
if(ob[i].average()>highest)
{
highest=ob[i].average();
no=i;
}

if(ob[i].emp()=='y'||ob[i].emp()=='Y')
working++;


if(ob[i].average()>=60)
div1++;
}

cout<<"Year: "<<year;
cout<<"No. of working graduates: "<<working<<"\nNo. of non working graduates: "<<n-working;
cout<<"\n\nDetails of top most scorer: "<<"\n";
ob[no].print1();
cout<<"\n";
ob[no].print3();
cout<<"\n";
ob[no].print2();
cout<<"\n"<<((n-working)/n)*100<<"% of graduates are non-working and "<<(div1/n)*100<<"% are first divisioners";


getch();
}