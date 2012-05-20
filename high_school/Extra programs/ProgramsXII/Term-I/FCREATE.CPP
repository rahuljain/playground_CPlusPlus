#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct stu
{
int roll;
char name[20];
char add[20];
char f_name[20];
char m_name[20];
int tel_no[15];
};

void read(stu&t)
{
cout<<"Enter the roll no:";
cin>>t.roll;
cout<<"Enter the name:";
gets(t.name);
cout<<"Enter the address:";
gets(t.add);
cout<<"Enter father's name:";
gets(t.f_name);
cout<<"Enter mother's name:";
gets(t.m_name);
//cout<<"Enter the telephone number:";
//cin>>t.tel_no;
}

void main()
{
clrscr();
stu S;
fstream f;
char fname[15];
f.open("D:\\tc\\bin\\a.dat",ios::out);
char ans;
do
{
read(S);
f.write((char*)&S,sizeof(S));
cout<<"Do you want to continue?";
cin>>ans;
}
while(ans=='Y'||ans=='y');
f.close();
}