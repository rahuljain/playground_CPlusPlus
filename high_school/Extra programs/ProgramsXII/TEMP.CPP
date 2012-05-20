#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

//Queues
//Array Implementation-Circular Que.

class arr
{
int ar[100];
int front, rear;

public:
arr()
{
front = rear= -1;
}

void push()
{
int n;
cout<<"Enter the element to be pushed: ";
cin>>n;

if((rear==99&&front==0)||(front==rear+1))
{
cout<<"Que full!";
return;
}

else
if(front==-1)
{
ar[++rear]=n;
front++;
}

else
if(rear==99)
{
rear=0;
ar[rear]=n;
}

else
{
rear++;
ar[rear]=n;
}
}

void pop()
{
if(front==-1)
cout<<"Empty Que";

else


//Link Implemented Que.


/*

//Stacks.
// 1.Array Implementation.
class arr
{
int ar[100], top;

public:
arr()
{
top=-1;
}

void push()
{
cout<<"Enter the element: ";
int n;
cin>>n;
if(top==99)
{
cout<<"Stack overflow";
return;
}
else
ar[++top]=n;
}

void pop()
{
if(top==-1)
cout<<"Empty stack";

else
{
cout<<"Element popped: "<<ar[top];
top--;
}
getch();
}

void disp()
{
if(top==-1)
cout<<"Empty stack";
else
{
for(int i=top; i>=0; i--)
cout<<ar[i]<<" ";
}
getch();
}
};

// 2. Link Implementation.

struct node
{
int no;
node*next;
};

class link
{
node*top;
public:

link()
{
top=NULL;
}

void push()
{
char ans;
do
{
node*t=NULL;
t=new node;

cout<<"Enter the number you want to push: ";
cin>>t->no;
t->next=NULL;

if(top==NULL)
{
top=t;
}
else
{
t->next=top;
top=t;
}
cout<<"Do u wanna continue pushing? ";
cin>>ans;
}while(ans=='y'||ans=='Y');
}

void pop()
{
if(top==NULL)
cout<<"Stack empty";

else
{
node*t=top;
top=top->next;
delete t;
}
}

void disp()
{
node *t=top;
while(t!=NULL)
{
cout<<t->no<<" ";
t=t->next;
}
getch();
}

~link()
{
node*t=top;
node*temp;
while(t!=NULL)
{
temp=t;
t=t->next;
delete temp;
}
}
};

void main()
{
clrscr();
arr obj1;
link obj2;
int opt;
do
{
 cout<<"1.Array implemented stack. \n2.Link implemented stack. \n3.Exit? ";
  cin>>opt;
 switch(opt)
   {
      int ans;
	case 1:
	       do
		{
		  cout<<" \n1. PUSH \n2. POP \n3. DISPLAY \n4. EXIT ";
		   cin>>ans;
		  switch(ans)
		     {
			case 1:obj1.push();
			break;
			case 2:obj1.pop();
			break;
			case 3:obj1.disp();
			break;
			case 4:exit(0);
		     }
		}while(ans!=4);
	break;

	case 2:
	       do
		{
		   cout<<" \n1. PUSH \n2. POP\n3. DISPLAY \n4. EXIT: ";
		    cin>>ans;
		   switch(ans)
		     {
			case 1:obj2.push();
			break;
			case 2:obj2.pop();
			break;
			case 3:obj2.disp();
			break;
			case 4:exit(0);
		     }
		}while(ans!=3);
	break;
 }
}while(opt!=3);
}

*/