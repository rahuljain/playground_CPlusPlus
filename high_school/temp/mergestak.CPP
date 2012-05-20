// 16.Adjusting two arrays in a single stack.
// Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

const int n=50;

class X
{
int A[n], t1, t2;

public:
X()
{
t1=-1;
t2=n;
}

void push()
{
if(t1+1==t2)
{
cout<<"Overflow";
return;
}

int choice;
cout<<"Push into which stack? ";
cin>>choice;
if(choice==1)
{
t1++;
cout<<"Enter the element to be pushed: ";
cin>>A[t1];
}
else
if(choice==2)
{
t2--;
cout<<"Enter the element to be pushed: ";
cin>>A[t2];
}
}

void pop()
{
int choice;
cout<<"Which stack to pop from? ";
cin>>choice;
if(choice==1)
{
if(t1==-1)
cout<<"Stack 1 is empty.";
else
{
cout<<"Element being popped out is "<<A[t1];
t1--;
}
}

else
if(choice==2)
{
if(t2==n)
cout<<"Stack 2 is empty ";
else
{
cout<<"The element being popped out is: "<<A[t2];
t2++;
}
}
}

void display()
{
cout<<"\nContents of stack 1: "<<endl;
for(int i=t1; i>=0; i--)
cout<<A[i]<<" ";
cout<<"\nContents of stack 2: "<<endl;
for(i=t2; i<n; i++)
cout<<A[i];
getch();
}
};


void main()
{
clrscr();
X obj;
int opt;
do
{
cout<<"\n1.push \n2.pop \n3.display \n4.exit";
cout<<"\nEnter your choice: ";
cin>>opt;

switch(opt)
{
case 1: obj.push();
break;
case 2: obj.pop();
break;
case 3: obj.display();
break;
case 4:
default:exit(0);
}
}
while(opt!=4);
}