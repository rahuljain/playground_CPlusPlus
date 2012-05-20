#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<fstream.h>

struct stu
{
int roll;
char name[20];
char clas[10];
float marks;
char grade[2];
};

fstream f;
char fname[20];

void create()
{
f.open(fname, ios::out);
f.close();
cout<<"File named "<<fname<<" created.\n\n";
}

void getinfo(stu&t)
{
cout<<"Enter the roll number: ";
cin>>t.roll;
cout<<"Enter the class: ";
gets(t.clas);
cout<<"Enter the marks: ";
cin>>t.marks;
cout<<"Enter the grade: ";
gets(t.grade);
}

void search()
{
stu t;
int r;
f.open(fname, ios::in);
f.read((char*)&t, sizeof(stu));
cout<<"Enter the roll number to be searched for:";
cin>>r;

while(!f.eof())
   {
	 if(t.roll==r)
	     {
		cout<<"Roll no found.\n";
		//f.read((char*)t, ios::stu);
		cout<<"Name"<<t.name;
		cout<<"Class:";
		cout<<"Roll number"<<r;
		//cout<<"Grade:"<<;
		//cout<<"Marks:"<<;
	     }
	}
   f.close();
}


void main()
{
clrscr();
stu t;
cout<<"Enter the file name to be created: ";
gets(fname);
create();

char ans;
f.open(fname, ios::app);
do
{
cout<<"Enter the folowing data: ";
getinfo(t);
f.write((char*)&t, sizeof(stu));
cout<<"Do u wish to continue? ";
cin>>ans;
}while(ans=='y'||ans=='Y');
f.close();

search();
getch();
}