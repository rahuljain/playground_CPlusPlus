//Queues

//by Akshat Mathur
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>

struct st
{
	int rn;
	char n[30];
	st* ne;
};

class stu
{
	st* f, *r;
	public:
	stu() { f=r=NULL;}
	~stu()
	{
		st* t = f;
		while(f != NULL)
		{
			t = f->ne;
			delete f;
			f = t;
		}
	}
	void push()
	{
		st* t= new st;
		if(t == NULL)
		{
			cout<<"Heap Overflow!"; getch(); return;
		}
		cout<<"Roll No: ";
		cin>>t->rn;
		cout<<"Name: ";
		gets(t->n);
		t->ne = NULL;

		if(f == NULL) f = r = t;
		else
		{
			r->ne = t;
			r = t;
		}
	}

	void pop()
	{
		if(f == NULL) cout<<"Queue already empty!";
		else if(f == r) {delete f; f = r = NULL;}
		else
		{
			st* j = f;
			f = f->ne;
			delete j;
			cout<<"\nDeletion Done!";
		}
		getch();
	}
	void disp()
	{
		if(f == NULL) cout<<"Queue empty!";
		else
		{
			st* t = f;
			while(t != NULL)
			{
				cout<<"\nRoll No: "<<t->rn;
				cout<<"\nName: "<<t->n<<endl;
				t = t->ne;
			}
		}
		getch();
	}
};


const int n = 10;

class s
{
	int a[n];
	int f, r;
	public:
	s() { f = r = -1;}
	void push()
	{
		if((f == 0 && r == n-1) || f == r+1)
		{
			cout<<"\nQueue full!";
			getch();
		}
		else
		{
			if(f == -1) f = 0;
			else if(r == n-1) r = -1;
			r++;
			cout<<"Enter element ["<<r<<"]: ";
			cin>>a[r];
		}
	}

	void pop()
	{
		if(f == -1)	cout<<"\nQueue empty!";
		else
		{
			cout<<"Deleting.. "<<a[f];
			if(f == r) f = r = -1;
			else if(f == n-1) f = 0;
			else f++;
			getch();
		}
	}

	void dis()
	{
		if(f <= r)
			for(int i = f; i <= r; i++)
				cout<<"Element ["<<i<<"]: "<<a[i]<<endl;

		else
		{
			for(int i = f; i < n; i++)
				cout<<"Element ["<<i<<"]: "<<a[i]<<endl;
			for(i = 0; i <= r; i++)
				cout<<"Element ["<<i<<"]: "<<a[i]<<endl;
		}
		getch();
	}
};

void ar()
{
	 int op;
	 s x;
	 do
	 {
		clrscr();
		cout<<"1.   Push\n";
		cout<<"2.   Pop\n";
		cout<<"3.   Display\n";
		cout<<"4.   Exit\n";
		cout<<"Give your choice: ";
		cin>>op;
		switch(op)
		{
			case 1: x.push(); break;
			case 2: x.pop(); break;
			case 3: x.dis(); break;
			case 4: return;
		}
	 } while(op != 4);
}


void ll()
{
	int op;
	stu x;
	do
	{
		clrscr();
		cout<<"1.   Push\n";
		cout<<"2.   Pop\n";
		cout<<"3.   Display\n";
		cout<<"4.   Exit\n";
		cout<<"Give your choice: ";
		cin>>op;
		switch(op)
		{
			case 1: x.push(); break;
			case 2: x.pop(); break;
			case 3: x.disp(); break;
			case 4: return;
		}
	}while(op != 4);
}


void main()
{
	int o;
	do
	{
		clrscr();
		cout<<"\tQueues\n";
		cout<<"1.   Array implementation\n";
		cout<<"2.   Linked list implementation\n";
		cout<<"3.   Exit\n";
		cout<<"Enter choice: ";
		cin>>o;
		switch(o)
		{
			case 1: ar(); break;
			case 2: ll(); break;
			case 3: exit(0);
		}
	} while(o != 3);
}
/*
	OUTPUT
			Queues
	1.   Array implementation
	2.   Linked list implementation
	3.   Exit
	Enter choice: 1

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 1

	Enter element [3]: 9
	--------------------------------------------------------

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 3

	Element [0]: 1
	Element [1]: 3
	Element [2]: 5
	Element [3]: 9
	--------------------------------------------------------

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 2

	Deleting.. 1
	--------------------------------------------------------
	--------------------------------------------------------

				Queues
	1.   Array implementation
	2.   Linked list implementation
	3.   Exit
	Enter choice: 2

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 1
	Roll No: 3
	Name: c

	--------------------------------------------------------

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 3

	Roll No: 1
	Name: a

	Roll No: 2
	Name: b

	Roll No: 3
	Name: c
	--------------------------------------------------------


	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 2

	Deletion Done!


*/