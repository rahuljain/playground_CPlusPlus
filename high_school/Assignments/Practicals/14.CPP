#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

struct field
{
int roll;
float av;
char pf;
};

char fname[20];
fstream f;

class record
{
 public:
 void create()
 {
 f.open(fname, ios::out);
 f.close();
 cout<<"File named "<<fname<<" created!";
 }

 void info(field & t)
 {
 cout<<"Enter the roll no: ";
 cin>>t.roll;
 cout<<"Enter the average: ";
 cin>>t.av;
 cout<<"Pass/Fail(p/f) ? ";
 cin>>t.pf;
 }

 void append()
 {
 field temp;
 f.open(fname, ios::app);
 char ans;
 do
   {
     cout<<"Enter the following information: "<<endl;
     info(temp);
     f.write((char*)&temp, sizeof(temp));
     cout<<"Do you want to enter more records? ";
     cin>>ans;
    }
    while(ans=='y'||ans=='Y');
  f.close();
  }

  void display()
  {
  field temp;
  f.open(fname, ios::in);
  cout<<"The file "<<fname<<" contains the following records: ";
  f.read((char*)&temp, sizeof(field));

  while(f)
  {
  cout<<"\nRoll no: "<<temp.roll;
  cout<<"\nAverage: "<<temp.av;
  cout<<"\nPass\Fail: "<<temp.pf;
  f.read((char*)&temp, sizeof(temp));
  }
  f.close();
  getch();
  }

  void reverse()
  {
  long p;
  int temp1, temp2;
  f.open(fname, ios::in|ios::out);
  f.seekg(0,ios::end);
  p=f.tellg();
  int no_of_rec=p/sizeof(field);
  for(int i=0; i<no_of_rec/2; i++)
  {
  long point1=i*sizeof(field);
  f.seekg(point1,ios::beg);
  f.read((char*)&temp1, sizeof(temp1));
  long point2=(no_of_rec-1-i)*sizeof(field);
  f.seekg(point2, ios::beg);
  f.read((char*)&temp2, sizeof(temp2));
  f.seekp(point1, ios::beg);
  f.write((char*)&temp2, sizeof(temp2));
  f.seekp(point2, ios::beg);
  f.write((char*)&temp1,sizeof(temp1));
  }
  f.close();
  cout<<"File reversed";
  getch();
  }

};

void main()
{
clrscr();
record obj;
cout<<"Enter the file name: ";
gets(fname);
int opt;
do
{
cout<<"\n1.create the file\n2.append\n3.display\n4.reverse\n5.exit\n";
cout<<"Enter your option: ";
cin>>opt;
switch(opt)
{
case 1: obj.create();
break;
case 2: obj.append();
break;
case 3: obj.display();
break;
case 4: obj.reverse();
break;
case 5:
default:exit(0);
}
}
while(opt!=5);

}