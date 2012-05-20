#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
void read(int a[],int n)
{    cout<<"enter elements";
     for(int i=0;i<n;i++)
     cin>>a[i];
}
void insert(int a[],int& n)
{    cout<<"enter location";
     int k;
     cin>>k;int item;
     cout<<"enter value to be inserted";
     cin>>item;
     for(int i=n-1;i>=k;i--)
     {  a[i+1]=a[i];
	 a[k]=item;
	 n++;
     }
     for(int w=0;w<n;w++)
       {  cout<<a[w]; }
}
void delet(int a[],int &n)
{    cout<<"enter location";
     int k;cin>>k;
     for(int i=k+1;i<n;i++)
       { a[i-1]=a[i];
	  n--;
       }
       for(int w=0;w<n;w++)
       {  cout<<a[w]; }
}
void bubble(int a[],int n)
{  int t;
   for(int i=0;i<n-1-i;i++)
   for(int j=0;j<n-1;j++)
     {
	 if(a[j]>a[j+1]){  t=a[j];
			   a[j]=a[j+1];
			   a[j+1]=t;
			}
     }
     for(int w=0;w<n;w++)
       {  cout<<a[w]; }
}
void sel(int a[],int n)
{   int t;
    for(int i=0;i<n;i++)
    for(int j=i+1;i<n;j++)
       {
	  if(a[i]<a[j]){ t=a[i];
			   a[i]=a[j];
			   a[j]=t;
			}
       }
       for(int w=0;w<n;w++)
       {  cout<<a[w]; }
}
void main()
{ clrscr();int opt;char ch;
  const n=10;int m;int a[n];
  cout<<"enter array length";
  cin>>m;
  cout<<" 0   read"<<endl;
  cout<<" 1   insert"<<endl;
  cout<<" 2   delete"<<endl;
  cout<<" 3   selection sort"<<endl;
  cout<<" 4   bubble sort"<<endl;
  do
    {
       cout<<"enter choice";
       cin>>opt;
       switch(opt)
       {   case 0: read(a,m);break;
	   case 1: insert(a,m);break;
	   case 2: delet(a,m);break;
	   case 3: sel(a,m);break;
	   case 4: bubble(a,m);break;
	   case 10:exit(0);
	}
       cout<<"want to continue";
       cin>>ch;
    }while( ch=='y');
    getch();
}
