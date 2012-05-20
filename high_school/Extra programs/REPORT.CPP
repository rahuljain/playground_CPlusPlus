#include<iomanip.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 for(int i=1;i<=2;i++)
 {
  clrscr();
  int roll,mar1,mar2,mar3,tot;
  char name[20],sub1[15],sub2[15],sub3[15],grade1,grade2,grade3;
  cout<<"Enter the name of the student:";
  gets(name);
  cout<<"Enter the roll number of the student:";
  cin>>roll;
  cout<<"Enter the name of first subject:";
  gets(sub1);
  cout<<"Enter the marks obtained in "<<sub1<<':';
  cin>>mar1;
  cout<<"Enter the name of second subject:";
  gets(sub2);
  cout<<"Enter the marks obtained in "<<sub2<<':';
  cin>>mar2;
  cout<<"Enter the name of third subject:";
  gets(sub3);
  cout<<"Enter the marks obtained in "<<sub3<<':';
  cin>>mar3;
  tot=mar1+mar2+mar3;

  if (mar1>=85) grade1='A';
  else if (mar1>=75&&mar1<85) grade1='B';
  else if (mar1<75) grade1='C';

  if (mar2>=85) grade2='A';
  else if (mar2>=75&&mar2<85) grade2='B';
  else if (mar2<75) grade2='C';

  if (mar3>=85) grade3='A';
  else if (mar3>=75&&mar3<85) grade3='B';
  else if (mar3<75) grade3='C';

  clrscr();
  cout<<"\t\t\t     SARDAR PATEL VIDYALAYA";
  cout<<"\n\t\t\t\tNEW DELHI-110003";
  cout<<endl<<"------------------------------------------------------------"
		<<"--------------------";
  cout<<"Roll no.:"<<roll<<"\tName:"<<name
		<<"\t\tClass:XI D\t\tYear:2003-2004";
  cout<<endl<<"------------------------------------------------------------"
		<<"--------------------";
  cout<<"Subject\t\t\tMarks\t\t\tGrade";
  cout<<endl<<"------------------------------------------------------------"
		<<"--------------------";
  cout<<sub1<<"\t\t\t"<<mar1<<"\t\t\t  "<<grade1;
  cout<<endl;
  cout<<sub2<<"\t\t\t"<<mar2<<"\t\t\t  "<<grade2;
  cout<<endl;
  cout<<sub3<<"\t\t\t"<<mar3<<"\t\t\t  "<<grade3;
  cout<<endl;
  cout<<"\t\t TOTAL="<<tot;
  cout<<endl<<"------------------------------------------------------------"
		<<"--------------------";
  getch();
 }
}
/*
OUTPUT
									  SARDAR PATEL VIDYALAYA
										  NEW DELHI-110003
--------------------------------------------------------------------------------
Roll no.:6      Name:ANKIT JAIN         Class:XI D              Year:2003-2004
--------------------------------------------------------------------------------
Subject                 Marks                   Grade
--------------------------------------------------------------------------------
ENGLISH                 70                        C
PHYSICS                 80                        B
MATHS                   90                        A
					  TOTAL=240
--------------------------------------------------------------------------------
*/