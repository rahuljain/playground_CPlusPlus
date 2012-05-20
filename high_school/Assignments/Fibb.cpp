//fibonnacci series
//did you know that in this series each term is exactly 1.618033988749895
//times the previous term. this relation holds true for most terms coming
//later in the series.

//try it out and see for yourself.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 double a=1,b=1;
 double c;
 int i=0;
 clrscr();
 while(i<200)
 {
  c=a+b;
  a=b;
  b=c;
  cout.precision(0);
  cout<<"Next term:\t"<<b<<endl<<"Previous term:\t"<<a<<endl;
  cout.precision(15);
  cout<<"Ratio\t\t"<<b/a<<endl<<endl;
  i++;
  if(i%6==0)
  {
   getch();
   clrscr();
  }
 }
}