/* THIS PROGRAM FINDS THE SUM OF DIGITS IN ODD AND EVEN PLACES OF A NUMBER
   SEPERATELY.PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>

void main()

{
 clrscr();
 long int a,b;
 int numb=0,no=0,ne=0;
 cout<<"PLEASE ENTER A NUMBER:";
 cin>>a;
 b=a;
 while (a>0)
 {
  numb++;
  a=a/10;
 }
 a=b;
 for (int i=1;i<=numb;i++)
 {
  if (i%2==1)
    no+=a%10;
  else
    ne+=a%10;
  a/=10;
 }
 cout<<"THE SUM OF DIGITS IN ODD PLACES IN "<<b<<" ARE "<<no;
 cout<<"\nTHE SUM OF DIGITS IN EVEN PLACES IN "<<b<<" ARE "<<ne;
 getch();
}
/*
 OUTPUT:
 PLEASE ENTER A NUMBER:3244432
 THE SUM OF DIGITS IN ODD PLACES IN 3244432 ARE 13
 THE SUM OF DIGITS IN EVEN PLACES IN 3244432 ARE 9
*/

