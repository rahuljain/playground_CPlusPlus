/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

This program operates on a doubly linked list thru Insert
delete,display functions
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

struct Link
{
 Link*prev;
 int data;
 Link*next;
};

void Create();
void Delete();
void Insert();
void Display();

Link*Start = new Link;

void main()
{
 clrscr();
 char ch;
 int opt;

 do
 {
  clrscr();

  cout<<"Main Menu\t:-"<<endl<<endl;
  cout<<"1.Create a doubly linked list"<<endl;
  cout<<"2.Insert a node at the k'th position"<<endl;
  cout<<"3.Delete a node from the k'th position"<<endl;
  cout<<"4.Display the doubly linked list"<<endl;
  cout<<"5.Quit."<<endl<<endl;

  cout<<"Enter your choice:";
  cin>>opt;

  switch(opt)
  {
   case 1 :Create();Display();break;
   case 2 :Insert();Display();break;
   case 3: Delete();Display();break;
   case 4: Display();break;
   case 5: exit(0);
  }

  cout<<"Do You want to continue ? :";
  cin>>ch;

  if(ch=='n')		exit(0);

 }while(ch=='y');

 delete Start;
}

void Create()
{
 Link*i  = NULL;
 Link*temporary = NULL;
 i = Start;

 char Answer;

 cout<<"Enter the value : ";
 cin>>Start->data;
 Start->next = NULL;
 Start->prev=NULL;

 cout<<"Want to continue?:";
 cin>>Answer;

 while(Answer=='y')
 {
  temporary = new Link;
  cout<<"Enter the value : ";
  cin>>temporary->data;

  temporary->next = NULL;
  i->next = temporary;
  temporary->prev = i;
  i = temporary;

  cout<<"Want to continue?:";
  cin>>Answer;
 }
 delete temporary;
}


void Insert()
{
 Link *temporary = new Link;
 int k;
 cout<<endl<<"Enter k:";
 cin>>k;

 cout<<"Enter the number :";
 cin>>temporary->data;
 temporary->next = NULL;
 temporary->prev=NULL;

 if(k==1)
 {
  temporary->next = Start;
  temporary->prev = NULL;
  Start->prev = temporary;
  Start=temporary;
 }
 else
 {
  int count = 1;
  Link*i=Start;
  Link*pv=NULL;

  while((count<k-1)&&(i!=NULL))
  {
   pv=i;
   i=i->next;
   count++;
  }
  pv->next=temporary;
  temporary->prev=pv;
  temporary->next=i->next;
  delete i;
 }
}

void Delete()
{
 int k,count=0;
 cout<<"Enter k:";
 cin>>k;

 Link*i=Start;
 Link*p;

 if(Start==NULL)
 {
  cout<<"Linked list empty";return;
 }

 if(k==1)
 {
  Start=Start->next;Start->prev=NULL;
 }

 while((count<k-1)&&(i!=NULL))
 {
  p = i;
  i = i->next;
  count++;
 }

 if(i!=NULL)
 {
  i->prev->next = i->next;
  i->next->prev = i->prev;
 }

 delete i;
 cout<<endl<<"element.....deleted";
}


void Display()
{
 Link*i2=Start;
 while(i2!=NULL)
 {
  cout<<endl<<"Data :"<<i2->data;
  i2=i2->next;
 }
}
/*
	Output:-
Main Menu       :-

1.Create a doubly linked list
2.Insert a node at the k'th position
3.Delete a node from the k'th position
4.Display the doubly linked list
5.Quit.

Enter your choice:1
Enter the value : 1
Want to continue?:y
Enter the value : 2
Want to continue?:y
Enter the value : 3
Want to continue?:y
Enter the value : 4
Want to continue?:y
Enter the value : 5
Want to continue?:n

Data :1
Data :2
Data :3
Data :4
Data :5
Do You want to continue ? :y


Enter your choice:3

Enter k:2
element.....deleted

Data :1
Data :3
Data :4
Data :5
Do You want to continue ? :n

Enter your choice:2

Enter k:2
Enter the number :2

Data :1
Data :2
Data :3
Data :4
Data :5
Do You want to continue ? :n
*/























































