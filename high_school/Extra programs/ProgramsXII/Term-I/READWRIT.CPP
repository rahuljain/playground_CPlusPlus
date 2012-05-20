#include<fstream.h>
#include<conio.h>
#include<stdio.h>

struct stu
{
char name[20];
int roll;
};

class group
{
stu s;
fstream f;

public:

void getinfo()
     {
	cout<<"Name: ";
	gets(s.name);
	cout<<"Roll No.: ";
	cin>>s.roll;
	//n++;
     }

void disp()
     {
	 cout<<"Name: "<<s.name<<endl;
	 cout<<"Roll No.: "<<s.roll<<endl<<endl;

     }

void input1(char fname[20])
     {
	  f.open(fname, ios::out);
	  char ans;
	   do
	     {
	       getinfo();
	       f.write((char*)&s, sizeof(s));
	       cout<<"Do you wanna enter more ? ";
	       cin>>ans;
	     }while(ans=='y'||ans=='Y');

	f.close();
     }

void disp1(char fname[20])
     {
	f.open(fname, ios::in);
	f.read((char*)&s, sizeof(s));
	while(f)
	{
	 disp();
	 f.read((char*)&s, sizeof(s));
	 }
	 f.close();
      }

};


void main()
{
clrscr();
fstream f;
char fname[20];
group student;

cout<<"Enter the file name: ";
gets(fname);
f.open(fname, ios::out);
cout<<"file created. "<<endl;
f.close();

student.input1(fname);
cout<<endl;
student.disp1(fname);
getch();
}