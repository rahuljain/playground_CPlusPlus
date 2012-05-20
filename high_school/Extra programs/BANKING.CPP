/* THIS PROGRAM READS THE NAME, ACCOUNT NUMBER AND BALANCE,THEN ASKS IF A
   WITHDRAWAL OR DEPOSIT HAS TO BE MADE.IT WILL COMPLETE THE TRANSACTION AND
   THEN PRINT OUT THE NAME, ACCOUNT NUMBER AND NEW BALANCE */

# include<iostream.h>
# include<conio.h>
# include<stdio.h>
# include<process.h>
void main()
{
 clrscr();
 cout<<"\nPLEASE ENTER YOUR NAME: ";
 char name[20];
 gets(name);
 cout<<"PLEASE ENTER YOUR ACCOUNT NUMBER ";
 long int acc;
 cin>>acc;
 cout<<"PLEASE ENTER CURRENT BALANCE ";
 float bal;
 cin>>bal;
 clrscr();
 char choice;
 cout<<"PLEASE ENTER W FOR WITHDRAWAL OR D FOR DEPOSIT ";
 cin>>choice;
 float trans;
 switch (choice)
 {
   case 'd':
   case 'D':   {cout<<"PLEASE ENTER AMOUNT TO BE DEPOSITED ";
	       cin>>trans;
	       bal+=trans;
	       break;}

   case 'W':
   case 'w':   {cout<<"PLEASE ENTER AMOUNT TO BE WITHDRAWN ";
	       cin>>trans;
	       bal-=trans;
	       break;}
   default :exit(0);
  }
 clrscr();
 cout<<'\n'<<name;
 cout<<'\n'<<acc;
 cout<<'\n'<<"YOUR CURRENT BALANCE IS "<<bal;
 cout<<'\n'<<"THANK YOU FOR USING ANKIT'S BANKING SERVICES.\n";
 getch();
}