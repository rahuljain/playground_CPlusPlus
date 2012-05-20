//11. Hospital records-linked list.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>

struct hosp
{
int bed_no;
char p_name[20];
char d_name[20];
hosp* next;
};

class linklist
{
 hosp * st;

 public:
 linklist()
 {
  st=NULL;
 }
//
 ~linklist()
 {
 hosp*temp=st;
 while(st!=NULL)
 {
 st=temp->next;
 delete temp;
 temp=st;
 }
 }
//
 void create()
 {
  char ans;
  cout<<endl<<"Enter in increasing order of bed number"<<endl<<endl;

  hosp* t= new hosp;
   if(st==NULL)
     st=t;
  do
   {
    cout<<"Enter the bed no.: ";
    cin>>t->bed_no;
    cout<<"Enter the name of the patient: ";
    gets(t->p_name);
    cout<<"Enter the name of the doctor attending: ";
    gets(t->d_name);
    t->next=NULL;

    cout<<endl<<"Do you want to enter more data? ";
    cin>>ans;

    cout<<endl;
    hosp*tmp;
    if(ans=='y'||ans=='Y')
    {
     tmp=t;
     t=new hosp;
     tmp->next=t;
    }
   }
  while(ans=='y'||ans=='Y');
 }

void insert()
{
int b_no;
cout<<"Enter the bed number: ";
cin>>b_no;

hosp *t=new hosp;
t->bed_no = b_no;
cout<<"Enter the patient's name: ";
gets(t->p_name);
cout<<"Enter the doc's name: ";
gets(t->d_name);
t->next=NULL;

if(b_no==1)
{
t->next=st;
st=t;
return;
}

else
{
hosp *temp=st;                               // temp is a temporary node.
int i=1;
while(temp!=NULL)           //
{
temp= temp->next;
i++;
}
hosp *tp=st;                                  //tp is another temporary node.

for(int j=1; j<=b_no; j++)
{
  while((tp->next->bed_no)<b_no)
      tp=tp->next;
 return;
}

hosp *nxt=tp->next;
tp->next=t;
t->next=nxt;
}

}

void del()
{
int b_no;
cout<<"Enter the bed no to be deleted: ";
cin>>b_no;

hosp*temp=st;

if(b_no==st->bed_no)
{
st=st->next;
delete temp;
return;
}

else
{
hosp * prev;

hosp *tp=st;                                  //tp is another temporary node.

for(int j=1; j<=b_no; j++)
{
  while((tp->next->bed_no)<b_no)
      tp=tp->next;
}

prev=tp;
tp= tp->next;
prev->next=tp->next;
delete tp;
}
}

void disp()
{
char doc[20];
cout<<"Enter the doc's name whose patient's list you want to see: ";
gets(doc);

hosp *temp=st;
cout<<endl<<"The patients of doctor "<<doc<<" are: "<<endl;

while(temp!=NULL)
{
if(strcmp(temp->d_name, doc)==0)
cout<<temp->p_name<<endl;
temp=temp->next;
}
getch();
}

void disp1()
{
hosp *temp=st;
while(temp!=NULL)
{
cout<<"Bed Number:    "<<temp->bed_no<<endl;
cout<<"Patient Name:  "<<temp->p_name<<endl;
cout<<"Doctor's Name: "<<temp->d_name<<endl<<endl;
temp=temp->next;
}
getch();
}

};

void main()
{
clrscr();
linklist obj;
int opt;

do
{
clrscr();
cout<<"1. Create\n2. Insert\n3. Delete\n4. Display the list\n5. Display the doctor's patients\n6. Exit";
cout<<endl<<"Enter your option: ";
cin>>opt;
cout<<endl;

switch(opt)
{
case 1: obj.create();
break;
case 2: obj. insert();
break;
case 3: obj.del();
break;
case 4: obj.disp1();
break;
case 5: obj.disp();
break;
case 6: exit(0);
default:;
}
}
while(opt!=6);
}