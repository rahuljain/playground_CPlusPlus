//This program prints out the report card of two students
//Program created by Rahul Jain.

 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 void main()
 {
  clrscr();
  for(int i=1; i<=2; i++)
       {
	clrscr();
	float roll, marks1,marks2,marks3,total;
	char name[50], sub1[20], sub2[20], sub3[20], grade1, grade2, grade3;

	cout<<"Enter your roll number: ";
	cin>>roll;

	cout<<"Name: ";
	gets(name);
	cout<<endl;

	cout<<"Name of 1st subject: ";
	gets(sub1);
	cout<<"Marks: ";
	cin>>marks1;
	  if(marks1>=85)
	  grade1='A';
	  else
	  if(marks1<85&&marks1>=75)
	  grade1='B';
	  else
	  if(marks1<75)
	  grade1='C';
	  cout<<endl;

	cout<<"Name of 2nd subject: ";
	gets(sub2);
	cout<<"Marks: ";
	cin>>marks2;
	  if(marks2>=85)
	  grade2='A';
	  else
	  if(marks2<85&&marks2>=75)
	  grade2='B';
	  else
	  if(marks2<=75)
	  grade2='C';
	  cout<<endl;

	cout<<"Name of 3rd subject: ";
	gets(sub3);
	cout<<"Marks: ";
	cin>>marks3;
	  if(marks3>=85)
	  grade3='A';
	  else
	  if(marks3<85&&marks3>=75)
	  grade3='B';
	  else
	  if(marks3<=75)
	  grade3='C';

	total=marks1+marks2+marks3;

  clrscr();
  cout<<'\t'<<'\t'<<'\t'<<"Sardar Patel Vidyalaya";
  cout<<endl<<endl;
  cout<<'\t'<<'\t'<<'\t'<<"New Delhi-110003"<<endl;
  cout<<"--------------------------------------------------------------------------"<<endl;
  cout<<"Roll No.: "<<roll<<'\t'<<"Name: "<<name<<'\t'<<"Class: XI D"<<'\t'<<"Year: 2003-04"<<endl;
  cout<<"--------------------------------------------------------------------------"<<endl;
  cout<<endl;
  cout<<'\t'<<"Subject"<<'\t'<<'\t'<<'\t'<<"Marks"<<'\t'<<'\t'<<'\t'<<"Grade"<<endl<<endl;
  cout<<'\t'<<sub1<<'\t'<<'\t'<<'\t'<<marks1<<'\t'<<'\t'<<'\t'<<grade1<< endl<<endl;
  cout<<'\t'<<sub2<<'\t'<<'\t'<<'\t'<<marks2<<'\t'<<'\t'<<'\t'<<grade2<<endl<<endl;
  cout<<'\t'<<sub3<<'\t'<<'\t'<<'\t'<<marks3<<'\t'<<'\t'<<'\t'<<grade3<<endl<<endl;
  cout<<'\t'<<'\t'<<'\t'<<"Total = "<<total;

  getch();
 }
}




/*


OUTPUT:


			Sardar Patel Vidyalaya

			New Delhi-110003
--------------------------------------------------------------------------
Roll No.: 24    Name: Rahul Jain        Class: XI D     Year: 2003-04
--------------------------------------------------------------------------

	Subject                 Marks                   Grade

	Maths                   95                      A

	Physics                 65                      C

	English                 80                      B


*/