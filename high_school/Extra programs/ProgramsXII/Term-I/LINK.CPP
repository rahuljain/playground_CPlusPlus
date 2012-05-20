//This program inserts or deletes nodes at the kth                                       position.
//Program created by Rahul Jain.

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>

struct stu
{
   int roll;
   char name[20];
   float av;
   stu* next;               //pointer to the next link.
};


class linklist
{
   stu* st;                 // pointer to the first link.      
   public:
   linklist()
	{ st = NULL; }

   ~linklist()
   {
	stu* temp;
	while(st != NULL)
	{
		temp = st->next;
		delete st;
		st = temp;
	}
   }

   void create();
   void display();
   void delte();
   void insert();
};

void linklist::create()
{
   stu* t = new stu;
   char ans;
   if(st == NULL) st = t;

   do
      {
	     cout<<"Roll no: ";
	     cin>>t->roll;
	     cout<<"Name: ";
	     gets(t->name);
	     cout<<"Average: ";
	     cin>>t->av;
	     t->next = NULL;
	     cout<<"\nAny more data?(y/n): ";
	     cin>>ans;

	     stu* tmp;
	     if(ans == 'y')
		{
			tmp = t;
			t = new stu;
			tmp->next = t;
		}
      }
	 while(ans == 'y');
}


void linklist::display()
{
   stu* t = st;
   while(t != NULL)
   {
	cout<<"Roll no: "<<t->roll;
	cout<<"\nName: "<<t->name;
	cout<<"\nAverage:"<<t->av<<endl<<endl;
	t = t->next;
   }
   getch();
}


void linklist::insert()
{
   int k;
   cout<<"At what position do you want to add: ";
   cin>>k;
   stu* t;
   cout<<"Roll no: ";
   cin>>t->roll;
   cout<<"Name: ";
   gets(t->name);
   cout<<"Average: ";
   cin>>t->av;
   t->next = NULL;

   if(k == 1)
	{
	     t->next = st;
	     st = t;
	     return;
	}

   int a = 1;
   stu* temp = st;

   while(a < k-1)
   {
	temp = temp->next;
	a++;
   }

   stu* nxt = temp->next;
   temp->next = t;
   t->next = nxt;
}


void linklist::delte()
{
   stu* temp;
   int k;
   cout<<"Which node do you want to delete: ";
   cin>>k;

   if(k == 1)
   {
	temp = st;
	st = st->next;
	delete temp;
	return;
   }

   int a = 0;
   temp = st;

   while(temp != NULL)
   {
	a++;
	temp = temp->next;
   }

   if(k > a)
      {
	   cout<<k<<"th node does not exist";
	   return;
      }

   temp = st;
   stu* pr;
   a = 1;

   while(a < k)
   {
	a++;
	pr = temp;
	temp = temp->next;
   }

   pr->next = temp->next;
   delete temp;
}


void main()
{
   linklist obj;
   int opt;

   do
      {
	  clrscr();
	  cout<<"1. Create\n";
	  cout<<"2. Display\n";
	  cout<<"3. Insert\n";
	  cout<<"4. Delete\n";
	  cout<<"5. Exit\n";
	  cout<<"What function do you want to perform(1-5)? ";
	  cin>>opt;
	  cout<<endl;

	  switch (opt)
	    {
		case 1: obj.create(); break;
		case 2: obj.display(); break;
		case 3: obj.insert(); break;
		case 4: obj.delte(); break;
		case 5: exit(0);
		default: ;
	    }
      }
	while(opt!= 5);
}



/*

Output:

1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 1

Roll no: 24
Name: Rahul Jain
Average: 90

Any more data?(y/n): y
Roll no: 23
Name: Raghav
Average: 92

Ant more(y/n): n



1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 2

Roll no: 24
Name: Rahul Jain
Average:90

Roll no: 23
Name: Raghav
Average:92



1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 3

At what position do you want to add? 3
Roll no: 21
Name: Vihan
Average:96



1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 2

Roll no: 24
Name: Rahul Jain
Average:90

Roll no: 23
Name: Raghav
Average:92

Roll no: 21
Name: Vihan
Average:96






1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 4

Which node do you want to delete? 3





1. Create
2. Display
3. Insert
4. Delete
5. Exit
What function do you want to perform(1-5)? 2

Roll no: 24
Name: Rahul Jain
Average:90

Roll no: 23
Name: Raghav
Average:92



*/
