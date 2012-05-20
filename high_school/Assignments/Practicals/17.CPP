// 17. Book Inventory.
//Program created by Rahul Jain. XII D

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>

struct book
{
char author[10], title[10], pubn[10];
int stock;
float price;
}
fstream f;

class S
{
book b;

public:
void create()
{
char fname[10];
cout<<"Enter the file name to be created: ";
gets(fname);
f.open(fname, ios::out);
f.close();
}

void append()
{
char fname[10];
cout<<"Enter the filename: ";
gets(fname);

f.open(fname, ios::app);

char opt;
do
{
cout<<"Author's name: ";
gets(b.author);
cout<<"Title: ";
gets(b.title);
cout<<"Publication: ";
gets(b.pubn);
cout<<"Stock: ";
gets(b.stock);
cout<<"Price: ";
gets(b.price);

f.write((char*)&b, sizeof(b));
cout<<"Do you want to enter more records? ";
cin>>opt;
}
while(opt=='y'||opt=='Y');
f.close();
}
}

void display()
{
char fname[10];
cout<<"Enter the file name: ";
gets(fname);
f.open(fname, ios::in);
f.read((char*)&b, sizeof(b));
while(f)
{
cout<<"\nAuthor: "<<b.author;
cout<<"\nTitle: "<<b.title;
cout<<"\nPublication: "<<b.pubn;
cout<<"\nStock: "<<b.stock;
cout<<"\nPrice: "<<b.price<<endl;
f.read((char*)&b, sizeof(b));
}
f.close();
}

void purchase()
{
char opt;
do
{
char ttle[10], athr[10];
int no;
cout<<"Enter the title of the book you want to purchase: ";
gets(ttle);
cout<<"Enter the author of the book you want to purchase: ";
gets(athr);

f.open(fname, ios::in|ios::out)
f.read((char*)&b, sizeof(b));
int n=0, flag=0;
book b1;
while(f)
{
n++;
if((ttle==b.title)&&(athr==b.author))
{
b1=b;
flag=1;
}
f.read((char*)&b, sizeof(b));
}

if(flag==0)
cout<<"Book not available!!!";

else
if(flag==1)
{
cout<<"Enter the number of copies you want to purchase: ";
cin>>no;
if(no>b1.stock)
cout<<"Book out of stock!!!";
else
{
b1.stock-=no;
cout<<"\tBill: ";
cout<<"Book title: "<<ttle;
cout<<"Author: "<<athr;
cout<<"Amount payable: "<<b1.price*no;
f.close();
f.open(ios::in)

}

}

};
void main()
{
clrscr();

getch();
}