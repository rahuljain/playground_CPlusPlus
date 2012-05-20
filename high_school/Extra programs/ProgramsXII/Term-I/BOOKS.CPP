#include<conio.h>
#include<fstream.h>

struct Book
{
int book_no;
char Bt[25];
float price;
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
cout<<"Give file name:";
gets(fname);
f.open(fname,ios::out);
f.close();
cout<<"File named "<<fname<<" created.";
}

void append()
{
char fname[15];
cout<<"Give the file name";
gets(fname);
f.open(fname,ios::app);
char opt;
do
{
cout<<"Give the Book No.";
cin>>B.book_no;
cout<<"Give book title";
gets(B.Bt);
cout<<"Give price";
cin>>B.price;
cout<<"Give the stock";
cin>>B.stock;
f.write((char*)&B, sizeof(B));
cout<<"Do you want to append more?";
cin>>opt;
}
while(opt=="Y"||opt=="y")
f.close();
}

void display()
{
int Bnumber;
cout<<"Give the book no.:";
cin>>Bnumber;

char fname[15];
cout<<"Give the file name";
gets(fname);
f.open(fname, ios::in);
f.read((char*)&B, sizeof(B));

while(f)
{
if(Bnumber==B.book_no)
{
cout<<"Book No.:"<<B.book_no;
cout<<"Book Title:"<<B.Bt;
cout<<"Book Price:"<<B.price;
cout<<"Stock available:"<<B.stock;
}
f.read((char*)&B,sizeof(B));
}

f.close();
}

void update_rec()
{
int n=0;
int b_no;
char fname[25];
cout<<"Give filename";
gets(fname);
cout<<"Book no. of the the book to be updated:";
cin>>b_no;

f.open(fname,ios::in|ios::out);
 f.read((char*)&B,sizeof(B));
 int a=0;
 while(f&&a==0)
 {
  n++;
  if(b_no==B.bno)
  {
   cout<<"New stock:";
   cin>>B.stock;

   f.seekp((n-1)*sizeof(B));
   f.write((char*)&B,sizeof(B));
   f.close();
   a++;
   }
  }
 }
}

void main()
 {
  int opt;
  char ans;
  S D;

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
     case 1:D.create();
	    break;
     case 2:D.append();
	    break;
     case 3:D.update();
	    break;
     case 4:D.purchase();
	    break;
     case 5:D.dis_rec();
	    break;
     case 6:exit(0);
     default:cout<<"Wrong choice.";
    }

    cout<<"Do you want to continue?";
    cin>>ans;
   }while(ans=='y'||ans=='Y');
  }
