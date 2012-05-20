#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
 clrscr();
 int c;
 float a,b,result;
 cout<<"*******************************WELCOME TO MY CALCULATOR********************* ";
 cout<<endl<<"Enter first number:";
 cin>>a;
 cout<<endl<<"Enter second number:";
 cin>>b;
 cout<<endl<<" To Divide press    : ` 1  '";
 cout<<endl<<" To Multiply press  : ` 2  '";
 cout<<endl<<" To Add press       : ` 3  '";
 cout<<endl<<" To Subtract press  : ` 4  '";
 cout<<endl<<" To Exit press      : ` 5  '";
 cout<<endl;
 cin>>c;
  switch(c)
   {

     case 1:result=a/b;
      break;
     case 2:result=a*b;
      break;
     case 3:result=a+b;
      break;
     case 4:result=a-b;
      break;
     case 5:exit(0) ;
     default:cout<<endl<<"WRONG OPTION";
   }
   {
 cout<<endl<<" The requested operation has been performed !!! ";
 cout<<endl<<"Result ="<<result;
    }
}





