//This program creates, enters data and updates a file.
//Program created by Rahul Jain.

#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>

struct Book
{
 int b_no;
 char b_title[40];
 int price;
 int stock;
};

fstream f;
class S
{
 Book B;
 public:
 void create()
      {
	 char fname[15];
	 cout<<"Give the filename:";
	 gets(fname);
	 f.open(fname,ios::out);
	 f.close();
      }

 void append()
      {
	  char fname[15];
	  cout<<"Give the filename:";
	  gets(fname);
	  f.open(fname,ios::app);

	  char opt;
	  do
	    {
		 cout<<"Give the book number:";
		 cin>>B.b_no;
		 cout<<"Give the book title:";
		 gets(B.b_title);
		 cout<<"Give the price:";
		 cin>>B.price;
		 cout<<"Give the stock:";
		 cin>>B.stock;

		 f.write((char*)&B,sizeof(B));
		 cout<<"Do you want to append more?";
		 cin>>opt;
	    }

	 while(opt=='y'||opt=='Y');
	   f.close();
 }


void dis_rec()
{
 char fname[15];
 cout<<"Give the filename:";
 gets(fname);
 Book temp;
 cout<<"\nThe file content is:"<<endl<<endl;

 f.open(fname, ios::in);
 f.read((char*)&temp, sizeof(temp));

 while(f)
	{
	  cout<<"Book number : "<<temp.b_no<<endl;
	  cout<<"Book title  : "<<temp.b_title<<endl;
	  cout<<"Price       : "<<temp.price<<endl;
	  cout<<"stock       : "<<temp.stock<<endl<<endl;

	  f.read((char*)&temp,sizeof(temp));
	}
 f.close();
}

void purchase()
{
 char opt;

 char fname[15];
 cout<<"Give the filename:";
 gets(fname);

 do
 {
  int Bno;
  cout<<"Enter the book number of the book you want to buy:";
  cin>>Bno;
  int rep;
  cout<<"How many books do yo want to buy? ";
  cin>>rep;

  f.open(fname, ios::in|ios::out);
  f.read((char*)&B, sizeof(B));
  int n=0;
  Book B1;

  while(f)
       {
	   n++;
	   if(Bno==B.b_no)B1=B;
	   f.read((char*)&B, sizeof(B));
       }
	  if(rep>B1.stock)
	    cout<<"Sorry!Book out of stock."<<endl<<endl;
	  else
	    {
		  B1.stock-=rep;
		  cout<<"Your bill:"<<endl;
		  cout<<"Book title:"<<B1.b_title<<endl;
		  cout<<"Total money to pay:"<<(rep)*(B1.price)<<endl;

		  f.close();
		  f.open(fname,ios::in);
		  f.seekp((n-1)*sizeof(B1));
		  f.write((char*)&B1,sizeof(B1));
	   }
  f.close();
  cout<<"Want to purchase more?";
  cin>>opt;
  }
  while(opt=='y'||opt=='Y');
}

void update()
{
 int n=0;
 int Bno;
 int newstock;
 char fname[15];
 cout<<"Give the filename:";
 gets(fname);
 cout<<"Book number of the record to be updated:";
 cin>>Bno;

 f.open(fname,ios::in|ios::out);
 f.read((char*)&B,sizeof(B));

 int a=0;
 while(f&&a==0)
	{
	  n++;
	  if(Bno==B.b_no)
	     {
		   cout<<"New stock to be added? ";
		   cin>>newstock;
		   B.stock+=newstock;

		   f.seekp((n-1)*sizeof(B));
		   f.write((char*)&B,sizeof(B));
		   f.close();
		   a++;
	     }
  }
 }
};

 void main()
 {
  int optn;
  char ans;
  S t;

  do
   {
    clrscr();
    cout<<"1. To create a file."<<endl;
    cout<<"2. To append."<<endl;
    cout<<"3. To update."<<endl;
    cout<<"4. To purchase."<<endl;
    cout<<"5. To display all records."<<endl;
    cout<<"6. To exit."<<endl;
    cout<<"Give your choice:";
    cin>>optn;

    switch(optn)
    {
     case 1:t.create();
	    break;
     case 2:t.append();
	    break;
     case 3:t.update();
	    break;
     case 4:t.purchase();
	    break;
     case 5:t.dis_rec();
	    break;
     case 6:exit(0);
     default:cout<<"Wrong choice.";
    }

    cout<<"Do you want to continue?";
    cin>>ans;
   }
   while(ans=='y'||ans=='Y');
  }


/*

Output:
1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:1
Give the filename:b.dat
Do you want to continue?n



1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:2
Give the filename:b.dat
Give the book number:1
Give the book title:abc
Give the price:344
Give the stock:3
Do you want to append more?y
Give the book number:2
Give the book title:cat
Give the price:455
Give the stock:57
Do you want to append more?n
Do you want to continue?n




1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:3
Give the filename:b.dat
Book number of the record to be updated:1
New stock:56
Do you want to continue?n






1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:4
Give the filename:b.dat
Enter the book number of the book you want to buy:
2
How many books of book number 2 do yo want to buy? 4
Your bill:
Book title:cat
Total money to pay:1820
Want to purchase more?n
Do you want to continue?n





1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:5
Give the filename:b.dat
The file content is:
Book number:1
Book title:abc
Price:344
stock:56
Book number:2
Book title:cat
Price:455
stock:57
Do you want to continue?n

*/