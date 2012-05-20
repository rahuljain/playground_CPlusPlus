//This program updates a file using sequential updating method.
//Program developed by Rahul Jain.

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
fstream f;

void create()
{
 f.open(fname,ios::out);
 f.close();
 cout<<"\nFile named "<<fname<<" created.\n";

 getch();
}

void info(table & t)
{
 cout<<"Enter the employee number:";
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
	  cout<<"\nEnter the following information: \n\n";
	  info(temp);
	  f.write((char*)&temp,sizeof(table));
	  cout<<"Do you want to enter more data? (y/n)";
	  cin>>ans;
	}
	 while(ans=='y'||ans=='Y');

 f.close();
}

void display()
{
 table temp;
 f.open(fname,ios::in);
 cout<<"The file "<<fname<<" contains the following data: \n";
 f.read((char*)&temp,sizeof(table));

 while(f)
	{
	  cout<<"\nEmployee number:"<<temp.empno;
	  cout<<"\nEmployee name:"<<temp.name;
	  cout<<"\nEmployee designation:"<<temp.desig<<endl;
	  f.read((char*)&temp,sizeof(table));
	}
 f.close();

 getch();
}

void update1()            //sorted file,sorted emp.no;
{
 table temp;
 char tname[15];
 cout<<"Enter a temporary filename:";
 gets(tname);
 f.open(fname,ios::in);
 fstream f1;
 f1.open(tname,ios::out);
 int EMPNO;
 f.read((char*)&temp,sizeof(table));
 cout<<"Enter Employee number whose record is to be updated:";
 cin>>EMPNO;

 while(f)
	 {
	  if(temp.empno==EMPNO)
		{
		   cout<<"Give new data:\n";
		   info(temp);
		   cout<<"Enter next Employee number, which is to be updated "
		       <<"(0 if no more updation):";
		   cin>>EMPNO;
		}
	  f1.write((char*)&temp,sizeof(table));
	  f.read((char*)&temp,sizeof(table));
	 }
 f1.close();
 f.close();
 remove(fname);
 rename(tname,fname);
 cout<<"\nFile updated.\n";
 getch();
}

void update2()
{
 table temp;
 char tname[15];
 cout<<"\nEnter temporary filename:";
 gets(tname);
 int EMPNO;
 char a;
   do
     {
	f.open(fname,ios::in);
	fstream f1;
	f1.open(tname,ios::out);
	f.read((char*)&temp,sizeof(table));
	cout<<"Enter Employee number whose record to be updated";
	cin>>EMPNO;

	while(f)
	  {
	   if(temp.empno==EMPNO)
		{
		     cout<<"Give new data:\n";
		     info(temp);
		}
	f1.write((char*)&temp,sizeof(table));
	f.read((char*)&temp,sizeof(table));
	  }

  f1.close();
  f.close();
  remove(fname);
  rename(tname,fname);
  cout<<"Do you want to continue updating? \n";
  cin>>a;
  }
  while(a=='y'||a=='Y');
 cout<<"\nFile updated.";
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
  cout<<"Enter choice.........\n";
  cout<<"1. Creation\n";
  cout<<"2. Appending\n";
  cout<<"3. Display\n";
  cout<<"4. Updation (when file is sorted and data is sorted)\n";
  cout<<"5. Updation (when file is sorted but data unsorted)\n";
  cout<<"6. Updation when (file is unsorted)\n";
  cout<<"7. Quit\n\n";
  cout<<"Enter your choice:";
  cin>>opt;
  switch(opt)
  {
   case 1:create();
	  break;
   case 2:append();
	  break;
   case 3:display();
	  break;
   case 4:update1();
	  break;
   case 5:
   case 6:update2();
	  break;
   case 7:
   default:exit(0);
  }
 }while(opt!=7);
}

/*

Output:

Enter choice.........
1. Creation
2. Appending
3. Display
4. Updation (when file is sorted and data is sorted)
5. Updation (when file is sorted but data unsorted)
6. Updation when (file is unsorted)
7. Quit

Enter your choice:3
The file emp.dat contains the following data:

Employee number:8
Employee name:kirodimal
Employee designation:ceo

Employee number:2
Employee name:Raghav Nyati
Employee designation:Director

Employee number:4
Employee name:Rohit
Employee designation:rgm






Enter choice.........
1. Creation
2. Appending
3. Display
4. Updation (when file is sorted and data is sorted)
5. Updation (when file is sorted but data unsorted)
6. Updation when (file is unsorted)
7. Quit

Enter your choice:4
Enter a temporary filename:t.dat
Enter Employee number whose record is to be updated:8
Give new data:
Enter the employee number:14
Enter name:Rajat
Enter designation:clerk
Enter next Employee number, which is to be updated (0 if no more updation):0

File updated.






Enter choice.........
1. Creation
2. Appending
3. Display
4. Updation (when file is sorted and data is sorted)
5. Updation (when file is sorted but data unsorted)
6. Updation when (file is unsorted)
7. Quit

Enter your choice:3
The file emp.dat contains the following data:

Employee number:14
Employee name:Rajat
Employee designation:clerk

Employee number:2
Employee name:Raghav Nyati
Employee designation:Director

Employee number:4
Employee name:Rohit
Employee designation:rgm







Enter choice.........
1. Creation
2. Appending
3. Display
4. Updation (when file is sorted and data is sorted)
5. Updation (when file is sorted but data unsorted)
6. Updation when (file is unsorted)
7. Quit

Enter your choice:6

Enter temporary filename:t.dat
Enter Employee number whose record to be updated12
Give new data:
Enter the employee number:66
Enter name:Rahat
Enter designation:kkk
Do you want to continue updating?
n

File updated.







Enter choice.........
1. Creation
2. Appending
3. Display
4. Updation (when file is sorted and data is sorted)
5. Updation (when file is sorted but data unsorted)
6. Updation when (file is unsorted)
7. Quit

Enter your choice:3
The file emp.dat contains the following data:

Employee number:14
Employee name:Rajat
Employee designation:clerk

Employee number:2
Employee name:Raghav Nyati
Employee designation:Director

Employee number:4
Employee name:Rohit
Employee designation:rgm

Employee number:45
Employee name:ra
Employee designation:hu

Employee number:66
Employee name:Rahat
Employee designation:kkk




*/