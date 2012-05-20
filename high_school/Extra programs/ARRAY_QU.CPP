/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

For array implementation of queues.
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

const n=10;

class Queue
{
 int Q[n];
 int fr,re;

 public:
 Queue()
 {
  fr=re=-1;
 }

 void add();
 void Delete();
 void display();
};

void main()
{
 clrscr();

 Queue q;
 char ch,ch2;

 do
 {
  clrscr();
  cout<<"1.......Add\n";
  cout<<"2.......Deleted\n";
  cout<<"3.......Display\n";
  cout<<"4.......Quit\n";

  cout<<"\nInput an Option : ";
  cin>>ch;

  switch(ch)
  {
   case '1' : q.add();		break;
   case '2' : q.Delete();		break;
   case '3' : q.display();	break;
   case '4' : exit(0);
  }

  cout<<endl<<endl<<"Continue............. : ";
  cin>>ch2;
 }while(ch2=='y');

 getch();
}

void Queue::add()
{
 if((fr==0 && re==n-1) || (fr==re+1))
 {
  cout<<"Overflow......Overflow";
  getch();
  return;
 }

 if(re==n-1)		re=0;
 else if(fr==-1)	fr=re=0;
 else			re++;

 cin>>Q[re];
}

void Queue::Delete()
{
 if(fr==-1)
 cout<<endl<<"Empty Queue";
 else
 {
  cout<<endl<<"Element Deleted out : ";
  cout<<Q[fr];
 }

 if(fr==re)		fr=re=-1;
 else if(fr==n-1)	fr=0;
 else			fr++;

 getch();
}

void Queue::display()
{
 if(fr<=re)
 {
  for(int i=fr;fr<=re;fr++)
  cout<<Q[i]<<' ';
 }
}


/*
	Output:-
1.......Puqh
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
Element Deleted out : 3

Input an Option : 3
2 1

Continue............. : n
*/