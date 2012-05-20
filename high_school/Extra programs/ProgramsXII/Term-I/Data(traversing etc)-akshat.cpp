//Program to create an array and to perform functions:
//traversing, adding, deleting, sorting, searching

//Program created by Rahul Jain.

#include <iostream.h>
#include <conio.h>
#include <process.h>

void trav(int a[], int n)
{
	cout<<endl;
	for(int i = 0; i < n; i++)
		cout<<"Element "<<i+1<<": "<<a[i]<<endl;
}

void add(int a[], int& n)
{
	int k, e;
	cout<<"\nAt what position you want to add: ";
	cin>>k;
	cout<<"Enter element: ";
	cin>>e;
	for(int i = n-1; i >= k-1; i--)
		a[i+1] = a[i];
		a[k-1] = e;
		n++;
}

void del(int a[], int &n)
{
	int k;
	cout<<"Element at which position you want to delete: ";
	cin>>k;
	for(int i = k; i < n; i++)
		a[i-1] = a[i];
	n--;
}

void ss(int a[], int n)
{
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[j] < a[i])
			{
				a[j] = a[i] + a[j];
				a[i] = a[j] - a[i];
				a[j] = a[j] - a[i];
			}
	cout<<"Sorting Done!";
}

void bs(int a[], int n)
{
	for(int i = n-1; i > 0; i--)
		for(int j = 0; j < i; j++)
			if(a[j] > a[j+1])
			{
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}
	cout<<"Sorting Done!";
}

void is(int a[], int n)
{
	int t;
	for(int i = 1; i < n; i++)
	{
		int j = i-1, t = a[i];
		while(t < a[j] && j >= 0)
		{
			a[j+1] = a[j];
			a[j] = t;
			j--;
		}
	}
	cout<<"Sorting Done!";
}

void sort(int a[], int n)
{
	int opt;
	cout<<"\n\n1.	Selection sort\n";
	cout<<"2.	Bubble sort\n";
	cout<<"3.	Insertion sort\n";
	cout<<"4.	Exit\n";
	cout<<"Give option: ";
	cin>>opt;
	switch(opt)
	{
		case 1: ss(a,n); break;
		case 2: bs(a,n); break;
		case 3: is(a,n); break;
		case 4: return;
	}
}

int sss(int a[], int n, int e)
{
	for(int i = 0; a[i] <= e && i < n; i++)
	{
		if (a[i] == e) return i+1;
	}
	return -1;
}

int ssu(int a[], int n, int e)
{
	for(int i = 0; i < n; i++)
	{
		if (a[i] == e) return i+1;
	}
	return -1;
}

int bs(int a[], int n, int e)
{
	int l = 0, h = n-1;
	if(a[l] > e || a[h] < e) return -1;
	while(!(h<=l))
	{
		if(a[l] == e) return l+1;
		if(a[h] == e) return h+1;
		int m = (l+h)/2;
		if(a[m] == e) return m+1;
		if(a[m] < e) l = m+1;
		else h = m-1;
	}
	return -1;
}


void sea(int a[], int n)
{
	int e, op;
	cout<<"\nWhich element do you want to search for: ";
	cin>>e;
	cout<<"1.   Sequential search for sorted list\n";
	cout<<"2.   Sequential search for unsorted list\n";
	cout<<"3.   Binary search for sorted list\n";
	cout<<"4.	Exit\n";
	cout<<"Give your option: ";
	cin>>op;
	int pos = -1;
	switch(op)
	{
		case 1: pos = sss(a,n,e); break;
		case 2: pos = ssu(a,n,e); break;
		case 3: pos = bs(a,n,e); break;
		case 4: return;
	}
	if(pos > 0) cout<<"The element was found at position no "<<pos;
	else cout<<"Element was not found!!";
}

void main()
{
	clrscr();
	int op, a[20], n;
	cout<<"No of elements: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Element "<<i+1<<": ";
		cin>>a[i];
	}
	char ans;
	do
	{
		clrscr();
		cout<<"1.	Traversing\n";
		cout<<"2.	Adding\n";
		cout<<"3.	Deleting\n";
		cout<<"4.	Sorting\n";
		cout<<"5.	Searching\n";
		cout<<"6.	Exit\n";
		cout<<"Give your option: ";
		cin>>op;
		switch(op)
		{
			case 1: trav(a,n); break;
			case 2: add(a,n); break;
			case 3: del(a,n); break;
			case 4: sort(a,n); break;
			case 5: sea(a,n); break;
			case 6: exit(0);
		}
		cout<<"\n\nContinue?(y/n) ";
		cin>>ans;
	} while(ans == 'y');
}

/*	OUTPUT:
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.      Sorting
	5.      Searching
	6.      Exit
	Give your option: 1

	Element 1: 9
	Element 2: 1
	Element 3: 4
	Element 4: 2
	Element 5: 7


	Continue?(y/n) n
	--------------------------------------------------------
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.      Sorting
	5.      Searching
	6.      Exit
	Give your option: 2

	At what position you want to add: 3
	Enter element: 5


	Continue?(y/n) n
	--------------------------------------------------------
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.      Sorting
	5.      Searching
	6.      Exit
	Give your option: 3
	Element at which position you want to delete: 2


	Continue?(y/n) n
	--------------------------------------------------------
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.   	Sorting
	5.      Searching
	6.      Exit
	Give your option: 4


	1.      Selection sort
	2.      Bubble sort
	3.      Insertion sort
	4.      Exit
	Give option: 2
	Sorting Done!

	Continue?(y/n) n
	--------------------------------------------------------
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.      Sorting
	5.      Searching
	6.      Exit
	Give your option: 5

	Which element do you want to search for: 3
	1.   Sequential search for sorted list
	2.   Sequential search for unsorted list
	3.   Binary search for sorted list
	4.   Exit
	Give your option: 2
	Element was not found!!

	Continue?(y/n) n
	--------------------------------------------------------
	1.      Traversing
	2.      Adding
	3.      Deleting
	4.      Sorting
	5.      Searching
	6.      Exit
	Give your option: 5

	Which element do you want to search for: 6
	1.   Sequential search for sorted list
	2.   Sequential search for unsorted list
	3.   Binary search for sorted list
	4.   Exit
	Give your option: 3
	The element was found at position no 3

	Continue?(y/n) n

*/