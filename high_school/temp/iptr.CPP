//18. Pointer to an array of objects.
//But here I've used selection sort instead of insertion sort.
//Program created by Rahul Jain. Class XII D.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>


struct sc
{
int sc_code, no_stu;
char sc_name[20];
};


void display(int n, sc *ptr)
{
cout<<endl;
for(int j=0; j<n; j++)
{
cout<<"\nSchool Code: " << (ptr+j)->sc_code;
cout<<"\nSchool Name: " << (ptr+j)->sc_name;
cout<<"\nNumber of students: " << (ptr+j)->no_stu;
}
}


void code_sort(int n, sc *ptr)
{
for(int i=0; i<n-1; i++)
for(int j=i+1; j<n; j++)
 {
     if( ((ptr+i)->sc_code) > ((ptr+j)->sc_code) )
     {
	 sc temp= *(ptr+i);
	 *(ptr+i)=*(ptr+j);
	 *(ptr+j)=temp;
     }
 }
display(n,ptr);
}

void name_sort(int n, sc *ptr)
{
   for(int i=0; i<n-1; i++)
   for(int j=i+1; j<n; j++)
      {
	 if( strcmp((ptr+i)->sc_name, (ptr+j)->sc_name)>0)
	     {
		 sc temp= *(ptr+i);
		 *(ptr+i)=*(ptr+j);
		 *(ptr+j)=temp;
	     }
      }
display(n,ptr);
}


void main()
{
clrscr();
sc obj[10];
sc *ptr = obj;
int n;

cout<<"For how many schools do you want to enter the data? ";
cin>>n;

cout<<"\nEnter the following data: \n";

for(int i=0; i<n; i++)
{
cout<<"\nSchool code: ";
cin>>(ptr+i)->sc_code;
cout<<"School name: ";
gets((ptr+i)->sc_name);
cout<<"Number of students: ";
cin>>(ptr+i)->no_stu;
}

cout<<"\n\nCode Sort: ";
code_sort(n, ptr);
cout<<"\n\nName Sort: \n";
name_sort(n,ptr);

getch();
}