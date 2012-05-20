#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct S
{
int code;
char prod[50];
int stock;
float cost;
};

void main()
{
clrscr();
int n;
S list[50];
cout<<"Enter the no. of products: ";
cin>>n;
for(int i=0; i<n; i++)
{
cout<<endl;
cout<<"Enter the product code: ";
cin>>list[i].code;
cout<<"Enter the Product description: ";
gets(list[i].prod);
cout<<"Entre the stock available: ";
cin>>list[i].stock;
cout<<"Enter the cost of the product: ";
cin>>list[i].cost;
}

int option;
cout<<"What do u wanna do?"<<endl;
cout<<"Dispatch or deliver (1/2)?" ;
cin>>option;

char name[50];
int cod,no,flag=1;


if(option==1)
{
cout<<"What product do u want: ";
gets(name);


for(int i=0; i<n; i++)
 if(strcmp(name,list[i].prod)==0)
  {
  flag=0;
  cout<<"The Product code is: "<<list[i].code;
  cout<<endl<<"How many products do u want: ";
  cin>>no;
	if(no>list[i].stock)
		cout<<"Stock not available.";
	else
		{
		  cout<<"Net amount: "<<no*list[i].cost;
		  list[i].stock-=no;
		}
  cout<<endl<<endl<<"The updated stock is:"<<endl;
  for(int i=0; i<n; i++)
  {
  cout<<list[i].code<<'\t'<<list[i].prod<<'\t'<<list[i].stock<<'\t'<<list[i].cost;
  cout<<endl;
  }
 }

else
{
if(flag)
cout<<"Product not available.";
}
}

getch();
}