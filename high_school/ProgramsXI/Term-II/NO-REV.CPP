/*   This program prints the reverse of an inputted number and
     checks if it's a palindrome or not.                          */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
 clrscr();
 int n, numb=0;
 cout<<"Enter the number: ";
 cin>>n;

 int num=n, no=n;

 while(n>0)
 {
  n/=10;
  numb++;
 }

 int x=0;

 while(num>0)
 {
 int r=num%10;
 x+=r*pow(10,numb-1);
 num/=10;
 numb--;
 }

 cout<<"The reversed number is: "<<x;

  if(x==no)
   cout<<endl<<'\n'<<"The number is a palindrome.";
  else
   cout<<'\n'<<'\n'<<"The number isn't a palindrome.";

 getch();
}