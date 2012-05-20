/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

For array implementation of stacks.
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>

const n=10;

class stack
{
 int S[n];
 int top;

 public:
 stack()
 {
  top=-1;
 }

 void push();
 void pop();
 void display();
};

void main()
{
 clrscr();

 stack s;
 char ch,ch2;

 do
 {
  clrscr();
  cout<<"1.......Push\n";
  cout<<"2.......Pop\n";
  cout<<"3.......Display\n";
  cout<<"4.......Quit\n";

  cout<<"\nInput an Option : ";
  cin>>ch;

  switch(ch)
  {
   case '1' : s.push();		break;
   case '2' : s.pop();		break;
   case '3' : s.display();	break;
   case '4' : exit(0);
  }

  cout<<endl<<endl<<"Continue............. : ";
  cin>>ch2;
 }while(ch2=='y');

 getch();
}

void stack::push()
{
 if(top==n-1)	{
				 cout<<"Overflow......Overflow";
				 getch();
				 return;
				}
 else
 {
  cout<<"Give the data : ";
  cin>>S[++top];
 }
}

void stack::pop()
{
	if(top==0)
		cout<<endl<<"Empty stack";
	else
	{
		cout<<endl<<"Element poped out : ";
		cout<<S[top--];
	}
	getch();
}

void stack::display()
{
 for(int i=top;i>=0;i--)
 cout<<S[i]<<' ';
}


/*
	Output:-
1.......Push
2.......Pop
3.......Display
4.......Quit

Input an Option : 1
Give the data : 1

Continue............. : y

(  After inputing.........)

Input an Option : 3
3 2 1

Input an Option : 2
Element poped out : 3

Input an Option : 3
2 1

Continue............. : n
*/