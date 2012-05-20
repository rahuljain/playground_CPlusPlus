//Program to create two 1D array and to merge them and append them

//by Akshat Mathur
#include <iostream.h>
#include <conio.h>
#include <process.h>

void disp(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<'\n';
	}
}


void app()
{
	int a[50], b[50], c[100], n, m;
	cout<<"How many elements in array 1: ";
	cin>>n;
	cout<<"How many elements in array 2: ";
	cin>>m;
	int p = n + m;
	cout<<"Array 1:\n";
	for(int i = 0; i < n; i++)
	{
		cout<<"Element "<<i+1<<": "; cin>>a[i];
	}
	cout<<"\n\nArray 2:\n";
	for(i = 0; i < m; i++)
	{
		cout<<"Element "<<i+1<<": "; cin>>b[i];
	}

	for(i = 0; i < n; i++)
		c[i] = a[i];

	for(int j = 0;i < n+m; i++, j++)
		c[i] = b[j];

	cout<<"A:\n";
	disp(a,n);
	cout<<"\nB:\n";
	disp(b,m);
	cout<<"\nC:\n";
	disp(c,n+m);
	getch();
}

void mer()
{
	int a[50], b[50], c[100], n, m;
	cout<<"How many elements in array 1: ";
	cin>>n;
	cout<<"How many elements in array 2: ";
	cin>>m;
	cout<<"Array 1 in acsending order:\n";
	for(int i = 0; i < n; i++)
	{
		cout<<"Element "<<i+1<<": "; cin>>a[i];
	}
	cout<<"\n\nArray 2 in descending order:\n";
	for(i = 0; i < m; i++)
	{
		cout<<"Element "<<i+1<<": "; cin>>b[i];
	}
	i=n-1;
	for(int j = 0, k = 0; k < n+m; k++)
	{
		if(a[i] >= b[j] && i >= 0)
		{
			c[k] = a[i];
			i--;
		}
		else if(a[i] > b[j] && j < m)
		{
			c[k] = b[j];
			j++;
		}
	}
	cout<<"A:\n";
	disp(a,n);
	cout<<"\nB:\n";
	disp(b,m);
	cout<<"\nC:\n";
	disp(c,n+m);
	getch();
}


void main()
{
	clrscr();
	int opt;
	do
	{
		clrscr();
		cout<<"1.	Append two arrays\n";
		cout<<"2.	Merge two arrays\n";
		cout<<"3.	Exit\n";
		cout<<"Give option: ";
		cin>>opt;
		switch(opt)
		{
			case 1: app(); break;
			case 2: mer(); break;
			case 3: exit(0);
			default: ;
		}
	}while(opt != 3);
}

/*	OUTPUT:
	1.      Append two arrays
	2.      Merge two arrays
	3.      Exit
	Give option: 1
	How many elements in array 1: 3
	How many elements in array 2: 4
	Array 1:
	Element 1: 2
	Element 2: 11
	Element 3: 6


	Array 2:
	Element 1: 4
	Element 2: 90
	Element 3: 16
	Element 4: 8
	A:
	2
	11
	6

	B:
	4
	90
	16
	8

	C:
	2
	11
	6
	4
	90
	16
	8
	--------------------------------------------------------
	1.      Append two arrays
	2.      Merge two arrays
	3.      Exit
	Give option: 2
	How many elements in array 1: 3
	How many elements in array 2: 4
	Array 1 in ascending order:
	Element 1: 2
	Element 2: 5
	Element 3: 9


	Array 2 in descending order:
	Element 1: 90
	Element 2: 10
	Element 3: 6
	Element 4: 1
	A:
	2
	5
	9

	B:
	90
	10
	6
	1

	C:
	90
	10
	9
	6
	5
	2
	1

*/