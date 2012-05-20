//Stacks
//Program created by Rahul Jain.

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
	st* top;
	int co;
	public:
	stu() { top == NULL; co = 0;}
	~stu()
	{
		st* t;
		while(top != NULL)
		{
			t = top->ne;
			delete top;
			top = t;
		}
	}

	void push()
	{
		if(co == 0)
		{
			co = 1;
			top = new st;
			cout<<"Roll No: ";
			cin>>top->rn;
			cout<<"Name: ";
			gets(top->n);
			top->ne = NULL;
		}
		else
		{
			st* ptr = new st;
			if (ptr == NULL) { cout<<"\nHeap Overflow!"; getch(); return;}
			else
			{
				cout<<"Roll No: ";
				cin>>ptr->rn;
				cout<<"Name: ";
				gets(ptr->n);
				ptr->ne = top;
				top = ptr;
			}
		}
	}

	void pop()
	{
		if(co == 0) { cout<<"Stack already empty!"; }
		else
		{
			st* j = top;
			if (top->ne == NULL) co = 0;
			top = top->ne;
			delete j;
			cout<<"\nDeletion Done!";
		}
		getch();
	}

	void disp()
	{
		if(co == 0) cout<<"Stack empty!";
		else
		{
			st* t = top;
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
	int top;
	public:
	s() { top = -1;}

	void push()
	{
		if (top < n-1)
		{
			cout<<"\nEnter element ["<<++top<<"]: ";
			cin>>a[top];
		}
		else { cout<<"\nStack full!"; getch(); }
	}

	void pop()
	{
		if(top > -1)
			cout<<"\nDeleting.. "<<a[top--];
		else
			cout<<"\nStack empty!";
		getch();
	}

	void dis()
	{
		if(top == -1)
			cout<<"\nStack empty!";
		else
			for(int i = top; i >= 0; i--)
				cout<<"Element ["<<i<<"]: "<<a[i]<<endl;
		getch();
	}
};

void main()
{
	s x;
	stu x1;
	int o, op;
	do
	{
		clrscr();
		cout<<"\tStacks\n";
		cout<<"1.   Array implementation\n";
		cout<<"2.   Linked list implementation\n";
		cout<<"3.   Exit\n";
		cout<<"Enter choice: ";
		cin>>o;
		if(o == 3) exit(0);
		   do
		     {
			clrscr();
			cout<<"1.   Push\n";
			cout<<"2.   Pop\n";
			cout<<"3.   Display\n";
			cout<<"4.   Exit\n";
			cout<<"Give your choice: ";
			cin>>op;
			if(o == 1)
			{
				switch(op)
				{
					case 1: x.push(); break;
					case 2: x.pop(); break;
					case 3: x.dis(); break;
					case 4: ;
				}
			}
			else if(o == 2)
			{
				switch(op)
				{
					case 1: x1.push(); break;
					case 2: x1.pop(); break;
					case 3: x1.disp(); break;
					case 4: ;
				}
			}
		   }while(op != 4);
	} while(o != 3);
}

/*	OUTPUT
			Stacks
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
	Give your choice: 2

	Deleting.. 9
	--------------------------------------------------------

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 3
	Element [2]: 5
	Element [1]: 3
	Element [0]: 1

	--------------------------------------------------------
	--------------------------------------------------------

				Stacks
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
	Give your choice: 2

	Deletion Done!

	--------------------------------------------------------

	1.   Push
	2.   Pop
	3.   Display
	4.   Exit
	Give your choice: 3

	Roll No: 2
	Name: b

	Roll No: 1
	Name: a

*/