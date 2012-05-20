#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>

struct book
{
 long bnum;
 char btit[40];
 int bprice;
 int bstock;
};

fstream f;
class SAHARA
{
 book B;
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
   cin>>B.bnum;
   cout<<"Give the book title:";
   gets(B.btit);
   cout<<"Give the price:";
   cin>>B.bprice;
   cout<<"Give the stock:";
   cin>>B.bstock;

   f.write((char*)&B,sizeof(B));
   cout<<"Do you want to append more?";
   cin>>opt;
  }while(opt=='y'||opt=='Y');
  f.close();
 }

 void display()
 {
 int Bno;
 cout<<"Give the book number:";
 cin>>Bno;
 char fname[15];
 cout<<"Give the file name:";
 gets(fname);

 f.open(fname,ios::in);
 f.read((char*)&B,sizeof(B));

 while(!eof)
 {
  if(Bno==B.bnum)
  {
   cout<<"Book number:"<<B.bnum<<endl;
   cout<<"Book title:"<<B.btitle<<endl;
   cout<<"Price:"<<B.bprice<<endl;
   cout<<"stock:"<<B.bstock<<endl;
  }
  f.read((char*)&B,sizeof(B));
 }
 f.close();
}

void disrec()
{
 char fname[15];
 cout<<"Give the filename:";
 gets(fname);
 book dummy;
 cout<<"The file content is:"<<endl;

 f.open(fname,ios::in);
 f.read((char*)&temp,sizeof(temp));

 while(!eof)
 {
  cout<<"Book number:"<<dummy.bnum<<endl;
  cout<<"Book title:"<<dummy.btit<<endl;
  cout<<"Price:"<<dummy.bprice<<endl;
  cout<<"stock:"<<dummy.bstock<<endl;

  f.read((char*)&dummy,sizeof(dummy));
 }
 f.close();
}

void purchase()
{
 char o;

 char fname[15];
 cout<<"Give the filename:";
 gets(fname);

 do
 {
  int Bno;
  cout<<"Enter the number of the book you want to buy:"<<endl;
  cin>>Bno;
  int s;
  cout<<"How many books of number "<<Bno<<" do yo want to buy:";
  cin>>s;

  f.open(fname,ios::in|ios::out);
  f.read((char*)&B,sizeof(B));
  int rocky=0;
  book B1;

  while(!eof)
  {
   rocky++;
   if(Bno==B.bnum)B1=B;
   f.read((char*)&B,sizeof(B));
  }
  if(B1.bstock<s)cout<<"Sorry!Not enough stock.";
  else
  {
   B1.bstock-=s;
   cout<<"Your bill:"<<endl;
   cout<<"Book title:"<<B1.btit<<endl;
   cout<<"Total money to pay:"<<(s)*(B1.bprice)<<endl;

   f.close();
    char opt;
   f.open(fname,ios::in);
   f.seekp((rocky-1)*sizeof(B1));
   f.write((char*)&B1,sizeof(B1));
  }
  f.close();
  cout<<"Want to purchase more?";
  cin>>opt;
 }while(opt=='y'||opt=='Y');
}

void update()
{
 int n=0;
 int Bno;
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
  if(Bno==B.bnum)
  {
   cout<<"New stock:";
   cin>>B.bstock;

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
  int opt;
  char ans;
  SAHARA please;

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
    cin>>opt;

    switch(opt)
    {
     case 1:please.create();
	    break;
     case 2:please.append();
	    break;
     case 3:please.update();
	    break;
     case 4:please.purchase();
	    break;
     case 5:please.disrec();
	    break;
     case 6:exit(0);
     default:cout<<"Wrong choice.";
    }

    cout<<"Do you want to continue?";
    cin>>ans;
   }while(ans=='y'||ans=='Y');
  }
