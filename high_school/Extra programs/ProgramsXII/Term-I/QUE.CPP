//Program created by Rahul Jain.
//XII D.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
const int N=10;

class X
{
int Q[N];
int F, R;

public:
X(){F=R=-1;}

void add()
{

if((R==N-1&&F==0)||(F==R+1))        //overflow.
    {
	cout<<"Overflow";
	return;
    }

else
   if(F==-1)
   F=0;


else
  if(R==N-1)
    R=-1;


R++;

cin>>Q[R];

}

void del()
{

if(R==-1&&F==-1)
   {
       cout<<"Empty queue";
       return;
   }


else
if(F==N-1)
F=0;


else
if(F==R)
F=R=-1;


else
F++;

getch();
}

void display()
{
if(F<=R)
  {
      for(int i=F; i<=R; i++)
      cout<<Q[i]<<endl;
  }

else

if(F>R)
  {
     for(int i=F;i<N-1; i++)
       cout<<Q[i]<<endl;
     for(int j=0; j<R; j++)
       cout<<Q[j]<<endl;
  }
getch();
}

};

void main()
{
clrscr();
X que;
int opt,n;

do
{
clrscr();
cout<<"1. Add\n2. Display\n3. Delete\n4. Exit\n";
cout<<"Enter the option(1-4): ";
cin>>opt;

switch(opt)
{
case 2: que.display();
break;

case 1:
{
cout<<"How many elements do you want to enter? ";
cin>>n;
cout<<"\nEnter elements to be added: "<<endl;
for(int i=0; i<n; i++)
que.add();
}
break;

case 3: que.del();
	break;

case 4:exit(0);

}
}while(opt!=4);
}
