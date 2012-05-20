#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>

struct stu
{
	int rn;
	char n[20];
	float av;
	stu* ne;
};
class li
{
	stu* st;
	public:
	li() {st = NULL;}
	~li()
	{
		stu* t;
		while(st != NULL)
		{
			t = st->ne;
			delete st;
			st = t;
		}
	}
	void cr();
	void dis();
	void del();
	void ins();
};

void li::cr()
{
	stu* te = new stu;
	char ans;
	if(st == NULL) st = te;
	do
	{
		cout<<"Roll no: ";
		cin>>te->rn;
		cout<<"Name: ";
		gets(te->n);
		cout<<"Average: ";
		cin>>te->av;
		te->ne = NULL;
		cout<<"\nAnt more(y/n): ";
		cin>>ans;
		stu* t;
		if(ans == 'y')
		{
			t = te;
			te = new stu;
			t->ne = te;
		}
	} while(ans == 'y');
}

void li::dis()
{
	stu* te = st;
	while(te != NULL)
	{
		cout<<"Roll no: "<<te->rn<<"\nName: "<<te->n<<"\nAverage:"<<te->av<<endl<<endl;
		te = te->ne;
	}
	getch();
}

void li::ins()
{
	int k;
	cout<<"At what position you want to add: ";
	cin>>k;
	stu* te;
	cout<<"Roll no: ";
	cin>>te->rn;
	cout<<"Name: ";
	gets(te->n);
	cout<<"Average: ";
	cin>>te->av;
	te->ne = NULL;
	if(k == 1)
	{
		te->ne = st;
		st = te;
		return;
	}
	int c = 1;
	stu* temp = st;
	while(c < k-1)
	{
		temp = temp->ne;
		c++;
	}
	stu* next = temp->ne;
	temp->ne = te;
	te->ne = next;
}

void li::del()
{
	stu* temp;
	int k;
	cout<<"Which node you want to delete: ";
	cin>>k;
	if(k == 1)
	{
		temp = st;
		st = st->ne;
		delete temp;
		return;
	}
	int c = 0;
	temp = st;
	while(temp != NULL)
	{
		c++;
		temp = temp->ne;
	}
	if(k > c) { cout<<k<<"th node does not exist"; return; }
	temp = st;
	stu* pr;
	c = 1;
	while(c < k)
	{
		c++;
		pr = temp;
		temp = temp->ne;
	}
	pr->ne = temp->ne;
	delete temp;
}


void main()
{
	li obj;
	int op;
	do
	{
	clrscr();
	cout<<"1.	Create\n";
	cout<<"2.	Display\n";
	cout<<"3.	Insert\n";
	cout<<"4.	Delete\n";
	cout<<"5.	Exit\n";
	cout<<"Enter option: ";
	cin>>op;
	switch (op)
	{
		case 1: obj.cr(); break;
		case 2: obj.dis(); break;
		case 3: obj.ins(); break;
		case 4: obj.del(); break;
		case 5: exit(0);
		default: ;
	}
	} while(op != 5);
}
