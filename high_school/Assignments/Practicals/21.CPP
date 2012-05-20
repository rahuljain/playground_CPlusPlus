//Program created by Rahul Jain  Class XII D.
//21. Linked Stacks(lifo).

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

struct node
{
 int bed_no;
 char p_name[10], d_name[10];
 node *next;
};

class stack
{
  node *top;

  public:

  stack()
   {
     top=NULL;
   }

  void push()
   {
	char ans;
	do
	 {
	     node* j=new node;

	     cout<<endl<<"Enter the following information: "<<endl;
	     cout<<"Bed Number: ";
	     cin>>j->bed_no;
	     cout<<"Patient's Name: ";
	     gets(j->p_name);
	     cout<<"Doctor's name: ";
	     gets(j->d_name);
	     j->next=NULL;

	     if(top==NULL)
	       top=j;

	     else
	       {
		   j->next=top;
		   top=j;
	       }

	     cout<<"Do you want to enter more data? ";
	     cin>>ans;
	}
	 while(ans=='y'||ans=='Y');
   }

  void pop()
   {
	if(top==NULL)
	  cout<<"\nStack empty" ;

	else
	 {
	   node*j=top;
	   top=top->next;
	   cout<<"\nBed number popped: "<<j->bed_no;
	   delete j;
	 }

    getch();
   }

  void display1()
   {
     node *j=top;

     if(top==NULL)
       cout<<"Empty stack!";

     else
       {
	 while(j!=NULL)
	   {
	     cout<<"\nBed Number: "<<j->bed_no;
	     cout<<"\nPatient's Name: "<<j->p_name;
	     cout<<"\nDoctor's Name: "<<j->d_name;
	     cout<<endl<<endl<<endl;
	     j=j->next;
	   }
       }

     getch();
   }


  void display2()
   {
	char doc[10];

	if(top==NULL)
	   cout<<"Stack empty";

	else
	  {
	     node* j=top;
	     cout<<"\nEnter the doctor's name whose patients you want to display: ";
	     gets(doc);

	     cout<<"\nThe patients of doctor "<<doc<<" are: "<<endl;
	     while(j!=NULL)
	       {
		  if(strcmp(doc, j->d_name)==0)
		      cout<<endl<<j->p_name<<endl;

		  j=j->next;
	       }
	   }
       getch();
   }

 ~stack()
  {
    node*j=top;
    node*temp;
    while(j!=NULL)
      {
	temp=j;
	j=j->next;
	delete temp;
      }
   }

};



void main()
{
clrscr();

stack obj;

int opt;
   do
    {
	cout<<" \n1.Push \n2.Pop \n3.Display the whole stack \n4.Display the patient names of a doctor \n5.Exit";
	cout<<" \nEnter your option: ";
	cin>>opt;

	switch(opt)
	   {
		case 1: obj.push();
		break;
		case 2: obj.pop();
		break;
		case 3: obj.display1();
		break;
		case 4: obj.display2();
		break;
		case 5: exit(0);
	   }

    }while(opt!=5);
 }