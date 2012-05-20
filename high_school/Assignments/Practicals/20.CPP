//Program created by Rahul Jain. XII D.
//Cicular que(fifo)

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

const int n=10;

struct emp
{
int emp_no;
char emp_name[10];
};


class q_circ
{
  emp arr[n];

  int front, rear;

  public:

  q_circ()
   {
      front=rear=-1;
   }

  void push()
   {
	if((front==0 && rear==n-1)||(front==rear+1))
	     {
		cout<<"Que full!";
		getch();
	     }

	else
	     {
		if(front==-1)
		    front=0;

		else
		   if(rear==n-1)
		       rear=-1;

		rear++;

		cout<<"Enter the data: "<<endl;
		cout<<"Employee number: ";
		cin>>arr[rear].emp_no;
		cout<<"Employee name: ";
		gets(arr[rear].emp_name);
	     }
       getch();
   }

  void pop()
   {
      if(front==-1)
	cout<<"\nQue empty";

      else
	{
	   if(front==rear)
		front=rear=-1;

	   else
		if(front==n-1)
		   front=0;

	   else
		front++;

	   getch();
	}
   }

  void disp()
   {
	if(front<=rear)
	   for(int i=front; i<=rear; i++)
	      cout<<arr[i].emp_no<<" "<<arr[i].emp_name<<"\t";

	else
	   {
	      for(int i=front; i<n; i++)
		 cout<<arr[i].emp_no<<" "<<arr[i].emp_name<<"\t";
	      for(i=0; i<=rear; i+=sizeof(emp))
		  cout<<arr[i].emp_no<<" "<<arr[i].emp_name<<"\t";
	   }
	      getch();
   }

};

void main()
{
clrscr();
int opt;
q_circ emp1;

do
{
clrscr();
cout<<" \n1.Push \n2.Pop \n3.Display \n4.Exit";
cout<<" \nEnter your choice: ";
cin>>opt;

switch(opt)
{
case 1: emp1.push();
break;
case 2: emp1.pop();
break;
case 3: emp1.disp();
break;
case 4: exit(0);
//default: return;
}
}while(opt!=4);
}