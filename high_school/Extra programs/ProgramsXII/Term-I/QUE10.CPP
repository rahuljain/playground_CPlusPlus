#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct X
{
int Rno;
char name[20];
X*prev;
X*next;
};

class double
{
X*start;
X()
{
start=NULL;
}


j->prev=NULL;
j->next=NULL;
j->next=p;
p->prev=j;
p->next=NULL;

void insert()
{
//inserting a node:
j->next->prev=q;
q->next=j->next;
q->prev=j;
j->next=q;

}

//insertion:


};

//----------------------------------------------------------------
class stu
{

void add()
{
stu*t=new stu;
if(t==NULL)
{
cout<<"Overflow";
return;
}

cin>>t->no;
gets(t->name);
t->next=NULL;
if(front==NULL)
{
front=rear=t;}
else
{
rear->next=t;
rear=t;
}
}

void del()
{
if(front==NULL)
{
cout<<"Empty";
return;
}
else
if(font == rear)
{
delete front ;
front =rear=NULL;
}
else
if


void main()
{
clrscr();

getch();
}