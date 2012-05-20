//12. Info regarding a list of employees - Link list implentation
//Program created by Rahul Jain.

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>

struct node
{
int emp_no;
char emp_name[20];
node* next;
};

class emplist
{
node *st;

public:
emplist()
{
st=NULL;
}

void create()
{
cout<<endl<<"Enter in ascending order of Employee Number."<<endl;
node* t= new node;
if(st==NULL)
st=t;

char ans;
do
{
cout<<endl<<"Enter the employee number: ";
cin>>t->emp_no;
cout<<"Enter the employee name:";
gets(t->emp_name);
t->next=NULL;
cout<<"\nDo you want to enter more data? ";
cin>>ans;

node* temp=new node;
if(ans=='y'||ans=='Y')
 {
   temp=t;
   t = new node;
   temp->next = t;
  }
}
while(ans=='y'||ans=='Y');
}

void add()
{
node*t=new node;
int k;
cout<<"\nEnter the number of the employee to be added: ";
cin>>k;
cout<<"Enter the employee name:";
gets(t->emp_name);
t->emp_no=k;
t->next=NULL;
cout<<endl;

if(k==1)
{
t->next=st;
st=t;
cout<<"\nNode added!"<<endl;
return;
}

else
{
node*tmp=st;
int a=1;
while(tmp->emp_no < k)
{
a++;
tmp=tmp->next;
}
tmp=st;

for(int i=1; i<a-1; i++)
  tmp=tmp->next;

node* temp=tmp->next;
tmp->next=t;
t->next=temp;
cout<<"\nNode added!"<<endl;
}
}

void del()
{
int no;
cout<<"Enter the number of the employee to be deleted: ";
cin>>no;

node*t=st;

if(no==1)
{
st=st->next;
delete t;
cout<<"\nNode deleted!"<<endl;
return;
}

else
{
int a=1;
node*prev;
while(a<no)
{
a++;
prev=t;
t=t->next;
}
prev->next=t->next;
delete t;
cout<<"\nNode deleted!"<<endl;
}
}

void disp()
{
node *temp=st;
while(temp!=NULL)
{
cout<<"\nEmployee Number: "<<temp->emp_no<<endl;
cout<<"Employee Name:   "<<temp->emp_name<<endl<<endl;
temp=temp->next;
}
getch();
}

};

void main()
{
clrscr();
emplist obj;
int opt;
do
{
cout<<" \n1. create \n2. add \n3. delete \n4. display \n5. exit \n";
cout<<"Enter your option: ";
cin>>opt;
switch(opt)
{
case 1: obj.create();
break;
case 2: obj.add();
break;
case 3: obj.del();
break;
case 4: obj.disp();
break;
case 5: exit(0);
}
}
while(opt!=5);
}