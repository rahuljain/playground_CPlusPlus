/* This program performs simple functions on a priority Queue, such as adding,
   deleting and displaying.
   Program developed by Ankit Jain.
*/

#include<iostream.h>
#include<conio.h>

struct node
{
 int data;
 node* next;
 int priority;
};

class Queue
{
 node *front,*rear;
 public:
 Queue()
 {
  front=rear=NULL;
 }
 void Add();
 void Del();
 void Disp();
 ~Queue();
};

void main()
{
 clrscr();
 Queue Obj;
 int opt;
 do
 {
  cout<<"Priority Queue\n1.Add\n2.Delete\n3.Display\n4.Exit\nEnter your choice:";
  cin>>opt;
  switch(opt)
  {
   case 1:Obj.Add();break;
   case 2:Obj.Del();break;
   case 3:Obj.Disp();break;
   case 4:
   default :opt=4;
  }
 }while(opt!=4);
}

void Queue::Add()
{
 char ch;
 do
 {
  node *t=new node;
  if(t==NULL)
  {
   cout<<"Heap overflow.";
   getch();
   return;
  }
  cout<<"Enter number:";cin>>t->data;
  cout<<"Enter the priority:";cin>>t->priority;
  t->next=NULL;
  if(front==NULL)
  {
   front=rear=t;
  }
  else if(t->priority > front->priority)
  {
   t->next=front;
   front=t;
  }
  else
  {
   node *j=front;
   node *prev=j;
   while((j->priority >= t->priority) && j!=NULL)
   {
    prev=j;
    j=j->next;
   }
   prev->next=t;
   t->next=j;
  }
  cout<<"Want to continue:";
  cin>>ch;
 }while(ch=='y'||ch=='Y');
}

void Queue::Del()
{
 if(front==NULL)
 {
  cout<<"Queue empty.";
  getch();
  return;
 }
 else
 {
  node *temp=front;
  cout<<"Data being deleted:"<<front->data<<"\nPriority:"<<front->priority;
  cout<<endl;
  if(front==rear)
   front=rear=NULL;
  else
   front=front->next;
  delete temp;
  getch();
 }
}

void Queue::Disp()
{
 node *j=front;
 while(j!=NULL)
 {
  cout<<"Data:"<<j->data<<"\tPriority:"<<j->priority<<endl;
  j=j->next;
 }
 getch();
}

void Queue::~Queue()
{
 while(front!=NULL)
 {
  node *t=front;
  front=front->next;
  delete t;
 }
 cout<<"Press any key to exit.";
 getch();
}

/*
Output:
Priority Queue
1.Add                                                                           
2.Delete                                                                        
3.Display
4.Exit

Enter your choice:1
Enter number:5
Enter the priority:8
Want to continue:y
Enter number:4
Enter the priority:3
Want to continue:y
Enter number:9
Enter the priority:10
Want to continue:y
Enter number:2
Enter the priority:15
Want to continue:n

Enter your choice:3
Data:2  Priority:15
Data:9  Priority:10
Data:5  Priority:8
Data:4  Priority:3

Enter your choice:2
Data being deleted:2
Priority:15

Enter your choice:3
Data:9  Priority:10
Data:5  Priority:8
Data:4  Priority:3

Enter your choice:4
Press any key to exit.
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
