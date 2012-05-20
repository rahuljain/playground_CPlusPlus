/* This program performs simple functions on a doubly linked list.
   Program developed by Rahul Jain.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct node
{
 char name[20];
 int roll;
 node *prev,*next;
};

void getnode(node *t)
{
 cout<<"Enter name:";
 gets(t->name);
 cout<<"Enter roll number:";
 cin>>t->roll;
 t->prev=NULL;
 t->next=NULL;
}

void shownode(node *t)
{
 cout<<"\nName:"<<t->name<<"\nRoll number:"<<t->roll<<endl;
}

class doub
{
 node *start;
 int n;
 public:
 doub()
 {
  start=NULL;
  n=0;
 }
 ~doub();
 void create();
 void insert();
 void del();
 void disp();
};

void doub::create()
{
 char ans;
 node  *t=new node;
 if(t==NULL)
 {
  cout<<"\nMemory overflow.";
  getch();
  return;
 }
 else n++;

 getnode(t);
 start=t;
 cout<<"Continue (y/n) :";
 cin>>ans;

 while(ans=='y'||ans=='Y')
 {
  node *te=new node;
  if(te==NULL)
  {
   cout<<"\nMemory overflow.";
   getch();
   return;
  }
  else n++;

  getnode(te);
  t->next=te;
  te->prev=t;
  t=t->next;
  cout<<"Continue (y/n) :";
  cin>>ans;
 }
}

void doub::insert()
{
 int k;
 cout<<"\nEnter positon where node to be added:";
 cin>>k;

 if ( k>n+1 || k<1 )
 {
  cout<<"\nNot possible to insert node at position "<<k;
  getch();
  return;
 }
 node *t=new node;
 if(t==NULL)
 {
  cout<<"\nMemory overflow.";
  getch();
  return;
 }
 else n++;
 getnode(t);

 if(k==1)
 {
  t->next=start;
  start->prev=t;
  start=t;
 }
 else
 {
  node *te=start;
  for(int i=1;i<k-1;i++)
   te=te->next;
  t->next=te->next;
  te->next->prev=t;
  t->prev=te;
  te->next=t;
 }
 cout<<"Node inserted";
 getch();
}

void doub::del()
{
 int k;
 cout<<"Enter position of node to be deleted:";
 cin>>k;
 if(k<1||k>n)
 {
  cout<<"\nNo node present at position "<<k;
  getch();
  return;
 }
 if (k==1)
 {
  start=start->next;
  cout<<"\nDetails of node being deleted:";
  shownode(start->prev);
  delete start->prev;
  start->prev=NULL;
  n--;
 }

 else if(k==n)
 {
  node *t=start;
  while(t->next!=NULL)
   t=t->next;
  t->prev->next=NULL;
  cout<<"\nDetails of node being deleted:";
  shownode(t);
  delete t;
  n--;
 }

 else
 {
  node *t=start;
  for(int i=1;i<k;i++)
   t=t->next;
  t->next->prev=t->prev;
  t->prev->next=t->next;
  cout<<"\nDetails of node being deleted:";
  shownode(t);
  delete t;
  n--;
 }
 getch();
}

void doub::disp()
{
 node *t=start;
 while(t!=NULL)
 {
  shownode(t);
  t=t->next;
 }
 getch();
}

void doub::~doub()
{
 while(start!=NULL)
 {
  node *t=start;
  delete t;
  start=start->next;
 }
 cout<<"Press any key to exit.";
 getch();
}

void main()
{
 doub list;
 char ans;
 do
 {
  clrscr();
  cout<<"Doubly linked list\n1.To create list\n2.To display list\n3.To insert "
      <<"a node at kth position\n4.To delete kth node\nQ.To quit\nYour"
      <<" choice:";
  cin>>ans;
  switch(ans)
  {
   case '1':list.create(); break;
   case '2':list.disp(); break;
   case '3':list.insert(); break;
   case '4':list.del(); break;
   default : ans='q';
  }
 } while(ans!='q');
}

/*
Output:
Doubly linked list
1.To create list
2.To display list
3.To insert a node at kth position
4.To delete kth node
Q.To quit

Your choice:1
Enter name:Ankit Jain
Enter roll number:5
Continue (y/n) :y
Enter name:Rahul Jain
Enter roll number:23
Continue (y/n) :y
Enter name:Akshat Mathur
Enter roll number:3
Continue (y/n) :y
Enter name:Sravan Kumar
Enter roll number:18
Continue (y/n) :n

Your choice:2

Name:Ankit Jain
Roll number:5

Name:Rahul Jain
Roll number:23

Name:Akshat Mathur
Roll number:3

Name:Sravan Kumar
Roll number:18

Your choice:3

Enter positon where node to be added:4
Enter name:Anshum Gupta
Enter roll number:7
Node inserted

Your choice:4
Enter position of node to be deleted:2

Details of node being deleted:
Name:Rahul Jain
Roll number:23

Your choice:2

Name:Ankit Jain
Roll number:5

Name:Akshat Mathur
Roll number:3

Name:Anshum Gupta
Roll number:7

Name:Sravan Kumar
Roll number:18

Your choice:Q
Press any key to exit.
*/










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



                                                                                
                                                                                





