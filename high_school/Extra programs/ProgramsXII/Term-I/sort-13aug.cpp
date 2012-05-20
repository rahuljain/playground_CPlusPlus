	#include <iostream.h>
	#include <stdio.h>
	#include <iostream.h>
	#include <process.h>
	#include <conio.h>
	int a[10],temp[10];
	int n;
	void read()
		{
		cout<<"Enter the no of elements "<<endl;
		cin>>n;
		for(int i =0;i<n;i++)
			{
			cout<<endl<<"enter the "<<i+1<<"th element ";
			cin>>a[i];
			temp[i]=a[i];
			 }
		}
	void print()
		{
		cout<<"The array is "<<endl;
		for(int i =0;i<n;i++)
		cout<<" "<<a[i];
		}
	void swap(int i,int j)
		{
		int k=a[i];
		a[i]=a[j];
		a[j]=k;
		}
	void selsort()
		{
		for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		if(a[i]>a[j])
		swap(i,j);
		}

	void bublsort(int n)
		{
		while(n-1!=0)
			{
			for(int i=0;i<n-1;i++)
			if(a[i]>a[i+1])
			swap(i,i+1);
			n--;
			}
		}
	void insert(int n,int pos)
		{
		//if(x!=-1234)
		int x=a[n];
		//int temp=x;

		for(int i=n;i>pos;i--)
		a[i]=a[i-1];
		a[i]=x;
		}
	void ins(int n,int pos,int no)
		{
		 for(int i=n;i>pos;i--)
		 a[i]=a[i-1];
		 a[i]=no;
		 }
	void del(int n,int pos)
		{
		//int temp=a[n];
		for(int i=pos;i<n;i++)
		a[i]=a[i+1];
		//a[i]=temp;
		}
	void insort(int n)
		{
		for (int i=1;i<n;i++)
			{
			for(int j=0;j<i;j++)
				{
				if(a[i]<a[j])
					{
					insert(i,j);//56565756765
					j=i;
					}
				}
			}
		}
		void main()
		{
		int ans,pos,x;
		do{
		   clrscr();
		   cout<<"1 enter";
		   cout<<endl;
		   cout<<"2 display";
		   cout<<endl;
		   cout<<"3 selsort";
		   cout<<endl;
		   cout<<"4 bublsort";
		   cout<<endl;
		   cout<<"5 insort";
		   cout<<endl;
		   cout<<"6 insert";
		   cout<<endl;
		   cout<<"7 delete";
		   cout<<endl;
		   cout<<"8 exit";
		   cout<<endl;
		   cin>>ans;
		   switch(ans)
			{
			case 1:
			read();
			break;
			case 2:
			print();
			getch();
			break;
			case 3:
			selsort();
			break;
			case 4:
			bublsort(n);
			break;
			case 5:
			insort(n);
			break;
			case 6:
			cout<<"enter the position";
			cin>>pos;
			cout<<"enter the no.";
			cin>>x;
			ins(n,pos,x);
			n++;
			break;
			case 7:
			cout<<"enter the position";
			cin>>pos;
			del(n,pos);
			n--;
			break;
			case 8:
			getch();
			exit(0);
			break;
			default:
			cout<<"wrong choice";
			getch();
			break;
			}
		   }while(ans!=8);
		}