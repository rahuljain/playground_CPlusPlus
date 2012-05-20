/*
This program uses an array of structures in the heap area,
to record the data of n employees and sorts the data.

Program created by Rahul Jain.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct emp
{
int emp_no;
char name[50];
float salary;
};

void read(int n, emp* ptr)
{
for(int i=0; i<n; i++)
     {
	cout<<"\nEnter the employee number: ";
	cin>>(ptr+i)->emp_no;
	cout<<"Enter the name: ";
	gets((ptr+i)->name);
	cout<<"Enter the salary: ";
	cin>>(ptr+i)->salary;
     }
}

void display(int n, emp* ptr)
{
for(int i=0; i<n; i++)
cout<<"\n\nEmployee Number: "<<(ptr+i)->emp_no<<"\nName: "<<(ptr+i)->name<<"\nSalary: "<<(ptr+i)->salary;
}

void sort(int n, emp* ptr)
{
for(int i=0; i<n-1; i++)
  for(int j=i+1; j<n; j++)
     {
	if( (ptr+i)->emp_no > (ptr+j)->emp_no )
	     {
		emp temp = *(ptr+i);
		*(ptr+i)= *(ptr+j);
		*(ptr+j)=temp;
	     }
     }

cout<<"\n\nThe sorted array is: ";
display(n, ptr);
}

void main()
{
clrscr();
int n;
cout<<"How many employees? ";
cin>>n;

emp *ptr=new emp[n];

read(n, ptr);

clrscr();

cout<<"The unsorted array is: ";
display(n, ptr);

sort(n, ptr);

getch();
}