/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

To create a linked list, delete or insert a node
and display the list.
*/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

struct Link
{
 int Data;
 Link*next;
};

void Initilize();
void Delete();
void Delete_all();
void Insertion();
void Displaying();

Link *temp,*j;
Link *Start = new Link;
Link *Previous = new Link;
Link *Previous1 = new Link;
Link *j1 = new Link;
Link *j2 = new Link;
Link *p1 = new Link;

void main()
{
 X:
 clrscr();

 int opt;
 cout<<"1. Intialize"<<endl;
 cout<<"2. Delete"<<endl;
 cout<<"3. Insert"<<endl;
 cout<<"4. Display"<<endl;
 cout<<"5. Exit"<<endl;

 cout<<endl<<"Enter your option : ";
 cin>>opt;

 switch(opt)
 {
  case 1 : Initilize();break;
  case 2 : Delete();break;
  case 3 : Insertion();break;
  case 4 : Displaying();break;
  case 5 : Delete_all();exit(0);
 }
 goto X;
}

void Initilize()
{
 int count = 2;
 j = Start;

 char ans = 'y';
 cout<<endl<<"Enter the value of the first Link : ";
 cin>>Start->Data;

 Start->next = NULL;

 while(ans=='y')
 {
  temp = new Link;
  cout<<"Enter the value of the "<<count<<" Link : ";
  cin>>temp->Data;

  temp->next = NULL;
  j->next = temp;
  j = temp;

  count++;
  cout<<"Want to continue : ";
  cin>>ans;
 }
}

void Displaying()
{
	Link *j3 = new Link;
	j3 = Start;
	while(j3!=NULL)
	{
		cout<<endl<<"Number : ";
		cout<<j3->Data;
		j3 = j3->next;
	}
	getch();
	delete j3;
}

void Delete()
{
 int type;
 cout<<endl<<"Enter the basis of deletion No[1] or Kth element[2] : ";
 cin>>type;

 if(type==1)
 {
  int Data;
  cout<<"Enter the number to be deleted : ";
  cin>>Data;

  j2 = Start;
  if(j2->Data==Data)
  Start = Start->next;
  else
  {
   p1 = Start;
   Previous = Start;
   j2 = Start;

   while(j2->Data!=Data&&j2!=NULL)
   {
    Previous = p1;
    p1 = j2;
    j2 = j2->next;
   }

   if(j2==NULL)
   {
    Previous->next = NULL;
    delete p1;
   }
   else if(j2!=NULL)
   {
    p1->next = j2->next;
    delete j2;
   }
  }
 }
 else if(type==2)
 {
  int k;
  cout<<"Enter the position to be deleted : ";
  cin>>k;

  Previous = Start;
  j2 = Start;
  int counter = 0;

  while(counter<k-1&&j2!=NULL)
  {
   Previous = p1;
   p1 = j2;
   j2 = j2->next;
  }

  if(j2==NULL)
  {
   Previous->next = NULL;
   delete p1;
  }
  else if(j2!=NULL)
  p1->next = j2->next;

  delete j2;
 }
 cout<<endl<<"Element deleted.";
 Displaying(                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ter++;
   }

   if(j1==NULL)
   Previous->next = t;
   else if(j1!=NULL)
   {
    t->next = Previous1->next;
    Previous1->next = t;
   }
  }
  cout<<endl<<"Element at "<<counter<<" th position";
  getch();
 }
 else
 {
  int k;
  cout<<endl<<"Enter the position to be inserted : ";
  cin>>k;
  cout<<"Enter the number for the Link to be created : ";
  cin>>t->Data;
  t->next = NULL;

  if(k==1)
  {
   t->next = Start;
   Start = t;
  }
  else
  {
   int counter = 1;
   j1 = Start;
   Previous1 = Start;

   while(counter<k-1&&j1!=NULL)
   {
    Previous = j1;
    j1 = j1->next;
    counter++;
   }

   if(j1==NULL)
   Previous->next = t;
   else if(j1!=NULL)
   {
    t->next = j1->next;
    j1->next = t;
   }
  }
  cout<<endl<<"Element inserted at "<<k<<" th position.";
  getch();
 }
 delete t;
 Displaying();
}



void Delete_all()
{
 delete Start;
 delete j;
 delete j1;
 delete temp;
 delete Previous;
 delete Previous1;
 delete p1;
}
/*
	Output:-
1. Intialize
2. Delete
3. Insert
4. Display
5. Exit

Enter your option : 1

Enter the value of the first Link : 1
Enter the value of the 2 Link : 2
Want to continue : y
Enter the value of the 3 Link : 3
Want to continue : n

Enter your option : 2

Enter the basis of deletion No[1] or Kth element[2] : 2

Enter the position to be deleted : 3
Element deleted.

Number : 1
Number : 2

Enter your option :3

Enter the basis of insertion No[1] or Kth element[2] : 2

Enter the position to be inserted : 3
Enter the number for the Link to be created : 3
Element inserted at 3 th position.

Number : 1
Number : 2
Number : 3
*/


