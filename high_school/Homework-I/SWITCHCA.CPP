//This program finds the sum, difference, product, division and remainder of two nos.
//Program created by Rahul Jain
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int num1,num2,c;
char func;
cout<<"Enter two nos.";
cin>>num1>>num2;
cout<<"Which function do you want to perform ?"<<endl;
cout<<"To add them press a,To subtract press s,To multiply press m, To divide press d, To find the remainder press r "<<"\n";
cin>>func;

switch(func)
     {
	case 'A':
	case 'a':c=num1+num2;
		 cout<<num1<<"+"<<num2<<"="<<c;
		 break;

	case 'S':
	case 's':c=num1-num2;
		 cout<<num1<<"-"<<num2<<"="<<c;
		 break;

	case 'M':
	case 'm':c=num1*num2;
		 cout<<num1<<"*"<<num2<<"="<<c;
		 break;

	case 'd':
	case 'D':c=num1/num2;
		 cout<<num1<<"/"<<num2<<"="<<c;
		 break;

	case 'r':
	case 'R':c=num1%num2;
		 cout<<num1<<"%"<<num2<<"="<<c;
		 break;

	default:cout<<"Unidentified function";
     }
getch();
}







