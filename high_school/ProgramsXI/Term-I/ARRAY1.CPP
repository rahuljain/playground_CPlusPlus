//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a[100],n,oddctr=0, evenctr=0,Oddctr=0, Evenctr=0;
long oddsum=0, evensum=0, Oddsum=0, Evensum=0;
cout<<"How many numbers do you want to enter(less than 101)";
cin>>n;

for(int i=0; i<n; i++)
 cin>>a[i];

for(i=0; i<n; i++)
{
 if(a[i])
   {
    if(!(a[i]%2))
      {
       evensum+=a[i]; ;evenctr++;
      }
    else
      {
       oddsum+=a[i];
       oddctr++;
      }
   }

if(i)
 {
    if(!(i%2))
      {
       Evensum+=a[i];
       Evenctr++;
       }

       else
	{
	  Oddsum+=a[i];
	  Oddctr++;
	 }
}
}
cout<<"The average of the even no. is: "<<float(evensum)/evenctr;
cout<<"\nThe average of the odd nos. is: "<<float(oddsum)/oddctr;
cout<<"\nThe average of the nos. at even subscripts are: "<<float(Evensum)/Evenctr;
cout<<"\nThe average of nos. at odd subscripts are: "<<float(Oddsum)/Oddctr;
getch();
}

/*
Output:

How many numbers do you want to enter(less than 101)5
1 65 32 76 54
The average of the even no. is: 54
The average of the odd nos. is: 33
The average of the nos. at even subscripts are: 43
The average of nos. at odd subscripts are: 70.5
*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
