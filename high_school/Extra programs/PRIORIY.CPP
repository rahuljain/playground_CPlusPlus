/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

This program operates on a priority Queue and adds,
deletes and displays
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

struct node
{
 int Data;
 node* next;
 int Priority;
};

class Queue
{
 node*front,*rear;

 public:
 Queue()
 {
  front=rear=NULL;
 }

 void Adding();
 void Deleting();
 void Displaying();
};

void main()
{
 clrscr();

 Queue Obj;
 char ch,ch2;

 do
 {
  cout<<"1..........Add\n";
  cout<<"2..........Delete\n";
  cout<<"3..........Display\n";
  cout<<"4..........Exit\n";

  cout<<"Enter your choice:";
  cin>>ch;

  switch(ch)
  {
   case '1':Obj.Adding();break;
   case '2':Obj.Deleting();break;
   case '3':Obj.Displaying();break;
   case '4':exit(0);break;
  }

  cout<<"Want to continue : ";cin>>ch2;
 }while(ch2=='y');
 getch();
}

void Queue::Adding()
{
 node*t,*j,*prev;

 char ch='y';
 while(ch=='y')
 {
  t=new node;
  cout<<"No:";cin>>t->Data;
  cout<<"Enter the priority :";cin>>t->Priority;
  t->next=NULL;

  if(t==NULL)
  {
   cout<<"Heap overflow";return;}
   if(front==NULL)
   {
	front=rear=t;
   }
   else if(t->Priority<front->Priority)
   {
	t->next=front;
	front=t;
   }
   else
   {
	j=front;prev=j;

	while((j->Priority<=t->Priority)&&j!=NULL)
	{
	 prev=j;
	 j=j->next;
	}

   prev->next=t;
   t->next=j;
  }
  cout<<"Want to continue : ";
  cin>>ch;
 }
}


void Queue::Deleting()
{
 node*temp;

 if(front==NULL)
 {
  cout<<"MT\n";
 }

 if(front==rear)
 {
  cout<<front->Data;front=rear=NULL;cout<<endl;
 }
 else
 {
  temp=front;
  cout<<front->Data;front=front->next;cout<<endl;
  delete temp;
 }
}


void Queue::Displaying()
{
 node*j=front;
 while(j!=NULL)
 {
  cout<<"Data:  "<<j->Data<<"\tpriority  :"<<j->Priority;cout<<endl;
  j=j->next;
 }
}

/*
	Output	:-
1..........Add
2..........Delete
3..........Display
4..........Exit

Enter your choice:1
No:1
Enter the priority :3
Want to continue : y

No:2
Enter the priority :4
Want to continue : y

No:3
Enter the priority :5
Want to continue : y

Enter your choice:2
1

Enter your choice:3
Data:  2        priority  :4
Data:  3        priority  :5
Want to continue : n
*/
