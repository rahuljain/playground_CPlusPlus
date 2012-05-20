//THIS PROGRAM PRINTS A NAME FIVE TIMES.
//PROGRAM DEVELOPED BY ANKIT.
# include<iostream.h>
# include<stdio.h>
# include<conio.h>
void main()
{
 clrscr();
 char name[20];
 cout<<"PLEASE ENTER YOUR NAME:"<<endl;
 gets (name);
 cout<<"YOUR NAME WILL NOW BE REPRODUCED FIVE MORE TIMES ";
 for (int i=1;i<=5;i++)
  {
   cout<<endl<<name;
   getch();
  }
}
