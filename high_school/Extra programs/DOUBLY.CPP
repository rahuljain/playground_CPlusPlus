/*DOUBLY.CPP*/
/*This program operates on a doubly linked list thru insert
  delete,display functions*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
struct s
	{  	int no;
		s *prev;
		s *next;
	};
void create();
void del();
void insert();
void disp();
s *start = new s;
void main()
{       clrscr();
	char opt,ch;
	cout<<"1.Create\n2.Delete\n3.Insert\n4.Display\n5.Exit\n";
	do
	{
	cout<<"Enter your choice : ";
	cin>>opt;
	switch(opt)
	{
		case '1' :create();disp();break                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                >temp->no;
		temp->next = NULL;
		j->next = temp;
		temp->prev = j;
		j = temp;
		cout<<"Want to conti : ";
		cin>>ans;
	}
 delete temp;
}
void del()
{       int k,count=0;
	cout<<"Enter k:";
	cin>>k;
	s*j=start;s*p;
	if(start==NULL)
	{cout<<"Linked list empty";return;}

	if(k==1)
	{ start=start->next;start->prev=NULL;}

	while((count<k-1)&&(j!=NULL))
	{      	p = j;
		j = j->next;
		count++;
	}
	if(j!=NULL)
	{      	j->prev->next = j->next;
		j->next->prev = j->prev;
	}
	delete j;
	cout<<endl<<".....deleted";
}
void insert()
{      	s *temp = new s;
	int k;
	cout<<endl<<"Enter k:";
	cin>>k;
	cout<<"Enter the number :";
	cin>>temp->no;
	temp->next = NULL;
	temp->prev=NULL;
	if(k==1)
	{       temp->next = start;
		temp->prev = NULL;
		start->prev = temp;
		start=temp;
	}
	else
	{       int count = 1;
		s*j=start;
		s*pv=NULL;
		while((count<k-1)&&(j!=NULL))
		{       pv=j;
			j=j->next;
			count++;
		}
		pv->next=temp;
		temp->prev=pv;
		temp->next=j->next;
		delete j;
	}

}
void disp()
{       s*j2=start;
	while(j2!=NULL)
	{      	cout<<endl<<"No :"<<j2->no;
		j2=j2->next;
	}
}

/*
1.Create
2.Delete
3.Insert
4.Display
5.Exit
Enter your choice : 1
Enter the value : 3
want to conti:y
Enter the value : 6
Want to conti : y
Enter the value : 8
Want to conti : n

No :3
No :6
No :8
do you want to cont:y
Enter your choice : 2
Enter k:1

.....deleted
No :6
No :8
do you want to cont:y
Enter your choice : 3

Enter k:1
Enter the number :4
No :4
No :6
No :8
do you want to cont:n
*/

