/* THIS PROGRAM FINDS THE SUM OF ODD AND ENEN DIGITS OF A NUMBER SEPERATELY.
   PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
void main()

{
 clrscr();
 long int a,b,no=0,ne=0;
 int numb=0;
 cout<<"PLEASE ENTER A NUMBER ";
 cin>>a;
 b=a;
 while(a>0)
 {
  numb++;
  a=a/10;
 }
 a=b;
 for(int i=1;i<=numb;i++)
  {
   int r=a%10;
   a=a/10;
   if(r%2==0)
    ne+=r;
   else
    no+=r;
  }
 cout<<"THE SUM OF ODD DIGITS IN "<<b<<" ARE "<<no;
 cout<<"\nTHE SUM OF EVEN DIGITS IN "<<b<<" ARE "<<ne;
 getch();
}

/*
 OUTPUT:
 PLEASE ENTER A NUMBER 11234
 THE SUM OF ODD DIGITS IN 11234 ARE 5
 THE SUM OF EVEN DIGITS IN 11234 ARE 6
*/







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
