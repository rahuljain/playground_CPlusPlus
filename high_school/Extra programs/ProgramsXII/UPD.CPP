//This program updates a file using sequential updating method.
//Program developed by Ankit Jain.

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

struct table
{
 int empno;
 char name[20];
 char desig[30];
};

char fname[15];
int s=sizeof(table);
fstream f;

void create()
{
 f.open(fname,ios::out);
 f.close();
 cout<<"File named "<<fname<<" created.\nPress any key to continue.";
 getch();
}

void getdata(table & t)
{
 cout<<"Enter employee number:";
 cin>>t.empno;
 cout<<"Enter name:";
 gets(t.name);
 cout<<"Enter designation:";
 gets(t.desig);
}

void append()
{
 table temp;
 f.open(fname,ios::app);
 char ans;
 do
 {
  cout<<"Give data......\n";
  getdata(temp);
  f.write((char*)&temp,s);
  cout<<"Do you want to enter more data? (y/n)";
  cin>>ans;
 }while(ans=='y'||ans=='Y');
 f.close();
}
void display()
{
 table temp;
 f.open(fname,ios::in);
 cout<<"Content(s) of "<<fname<<" is/are ........\n";
 f.read((char*)&temp,s);
 while(f)
 {
  cout<<"\nEmployee number:"<<temp.empno<<"\nEmployee name:"<<temp.name
      <<"\nEmployee designation:"<<temp.desig;
  f.read((char*)&temp,s);
 }
 f.close();
 cout<<"\nPress any key to continue";
 getch();
}

void update1()            //sorted file,sorted emp.no;
{
 table temp;
 char tname[15];
 cout<<"Enter temporary filename:";
 gets(tname);
 f.open(fname,ios::in);
 fstream f1;
 f1.open(tname,ios::out);
 int EMPNO;
 f.read((char*)&temp,s);
 cout<<"Enter Employee number whose record to be updated:";
 cin>>EMPNO;
 while(f)
 {
  if(temp.empno==EMPNO)
  {
   cout<<"Give new data:\n";
   getdata(temp);
   cout<<"Enter next Employee number, which is to be updated "
       <<"(0 if no more updation):";
   cin>>EMPNO;
  }
  f1.write((char*)&temp,s);
  f.read((char*)&temp,s);
 }
 f1.close();
 f.close();
 remove(fname);
 rename(tname,fname);
 cout<<"\nFile updated\nPress any key to continue.\n";
 getch();
}
void update2()
{
 table temp;
 char tname[15];
 cout<<"\nEnter temporary filename:";
 gets(tname);
 int EMPNO;
 do
 {
  f.open(fname,ios::in);
  fstream f1;
  f1.open(tname,ios::out);
  f.read((char*)&temp,s);
  cout<<"Enter Employee number whose record to be updated (0 to end):";
  cin>>EMPNO;
  while(f)
  {
   if(temp.empno==EMPNO)
   {
    cout<<"Give new data:\n";
    getdata(temp);
   }
  f1.write((char*)&temp,s);
  f.read((char*)&temp,s);
  }
  f1.close();
  f.close();
  remove(fname);
  rename(tname,fname);
  }while(EMPNO!=0);
 cout<<"\nFile updated\nPress any key to continue.";
 getch();
}
void main()
{
 clrscr();
 cout<<"Enter filename:";
 gets(fname);
 int opt;
 do
 {
  clrscr();
  cout<<"Enter choice.........\n1 for creation\n2 for appending"
      <<"\n3 for display\n4 for updation (when file is sorted and data is)"
      <<" sorted\n5 for updation (when file is sorted but data unsorted)"
      <<"\n6 for updation when (file is unsorted)\n7 to quit\n\nYour choice:";
  cin>>opt;
  switch(opt)
  {
   case 1:create();break;
   case 2:append();break;
   case 3:display();break;
   case 4:update1();break;
   case 5:
   case 6:update2();break;
   case 7:
   default:exit(0);
  }
 }while(opt!=7);
}
/*
Output:
Enter filename:ankit.txt

Enter choice.........
1 for creation
2 for appending
3 for display
4 for updation (when file is sorted and data is) sorted
5 for updation (when file is sorted but data unsorted)
6 for updation when (file is unsorted)
7 to quit

Your choice:1
File named ankit.txt created.
Press any key to continue.

Your choice:3

Content(s) of ankit.txt is/are ........

Employee number:3
Employee name:Ankit
Employee designation:CEO
Press any key to continue

Your choice:4

Enter temporary filename:ankit.new
Enter Employee number whose record to be updated:3
Give new data:
Enter employee number:1
Enter name:Ankit Jain
Enter designation:CEO
Enter next Employee number, which is to be updated (0 if no more updation):0

File updated
Press any key to continue.

Your choice:3

Content(s) of ankit.txt is/are ........

Employee number:1
Employee name:Ankit Jain
Employee designation:CEO
Press any key to continue

Your choice:5

Enter temporary filename:ankit.new
Enter Employee number whose record to be updated (0 to end):1
Give new data:
Enter employee number:2
Enter name:Ankit
Enter designation:GM
Enter Employee number whose record to be updated (0 to end):0

File updated
Press any key to continue.

Your choice:3
Content(s) of ankit.txt is/are ........

Employee number:2
Employee name:Ankit
Employee designation:GM
Press any key to continue
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                













