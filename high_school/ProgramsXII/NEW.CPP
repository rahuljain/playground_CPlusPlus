#include<iomanip.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct book
{
 int no;
 char title[25];
 float price;
 int stock;
};

struct purchase
{
 int no;
 int copies;
 int flag;
 float rate;
 float cost;
 char title[25];
} pur[15];

char fname[15];
fstream f;
class s
{
 public:
 void purchase()
 {
 fstream f;
 book t;
 int n;
 cout<<"Enter no. of books to be purchased (<=15) :";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter book no.";
  cin>>pur[i].no;
  cout<<"Enter no. of copies:";
  cin>>pur[i].copies;
 }
 for(i=0;i<n;i++)
 {
  pur[i].flag=-1;
  f.open(fname,ios::in);
  f.read((char*)&t,sizeof(t));
  while(f)
  {
   if (pur[i].no==t.no)
    {if (pur[i].copies<=t.stock)
     {
      update(pur[i].no,-1*pur[i].copies);
      pur[i].flag=1;
      pur[i].cost=pur[i].copies*t.price;
      pur[i].rate=t.price;
      strcpy(pur[i].title,t.title);
      break;
     }
     else
     {
      pur[i].flag=0;
      break;
     }
    }
    f.read((char*)&t,sizeof(t));
  }
  f.close();
 }
 cout<<"\nPress any key for bill.";
 getch();
 clrscr();
 for(int I=0;I<80;I++) cout<<"-";
 cout<<setw(48)<<"XYZ BOOK STORES"<<endl;
 for(I=0;I<80;I++) cout<<"-";
 cout<<"Book no.Copies\tTitle\t\t\tRate\tCost\n";
 float tcost=0;
 for(i=0;i<n;i++)
 {
  if (pur[i].flag==1)
  {
   cout<<pur[i].no<<'\t'<<pur[i].copies<<'\t'<<pur[i].title<<"\t\t"
   <<pur[i].rate<<'\t'<<pur[i].cost<<endl;
   tcost+=pur[i].cost;
  }
 }
 for(I=0;I<80;I++) cout<<"-";
 cout<<"Grand Total\t\t\t\t\t"<<tcost<<endl;
 for(I=0;I<80;I++) cout<<"-";
}

 void create_file()
 {
  f.open(fname,ios::out);
  f.close();
  cout<<"File created\n";
 }

 void get_book(book &t)
 {
  cout<<"Give book no.:";
  cin>>t.no;
  cout<<"Give book title:";
  gets(t.title);
  cout<<"Enter price:";
  cin>>t.price;
  cout<<"Enter stock:";
  cin>>t.stock;
 }

 void append_file()
 {
  book t;
  char ans;
  f.open(fname,ios::app);
  do
  {
   get_book(t);
   f.write((char*)&t,sizeof(t));
   cout<<"Any more books to be added ?";
   cin>>ans;
  } while(ans=='y'||ans=='Y');
  f.close();
 }

 void book_details()
 {
  int NO;
  cout<<"Enter book no.";
  cin>>NO;
  f.open(fname,ios::in);
  book t;
  f.read((char*)&t,sizeof(t));
  while(f)
  {
   if(NO==t.no)
   {
    cout<<"Book no.:"<<t.no<<"\nBook name:"<<t.title<<"\nCost Rs."<<t.price
	<<"\nStock left:"<<t.stock<<endl;
    f.close();
    return ;
   }
   f.read((char*)&t,sizeof(t));
  }
  cout<<"Book no. "<<NO<<" not found\n";
  f.close();
 }

 void update(int NO,int more_stock)
 {
  int n=0;
  book t;
  f.open(fname,ios::in|ios::out);
  f.read((char*)&t,sizeof(t));
  while(f)
  {
   n++;
   if(NO==t.no)
   {
    f.seekp((n-1)*sizeof(t));
    t.stock+=more_stock;
    f.write((char*)&t,sizeof(t));
    f.close();
    return;
   }
   f.read((char*)&t,sizeof(t));
  }
 }
};

void main()
{
 s dummy;
 cout<<"Give filename:";
 gets(fname);
 int opt,NO,more_stock;
 char ans;
 do
 {
 clrscr();
 cout<<"1.Create\n2.Append\n3.Display\n4.Purchase\n5.Update\n";
 cout<<"Your choice:";
 cin>>opt;
 switch(opt)
 {
  case 1: dummy.create_file(); break;
  case 2: dummy.append_file(); break;
  case 3: dummy.book_details(); break;
  case 4: dummy.purchase(); break;
  case 5: cout<<"Give book no. of book to be updated";
	  cin>>NO;
	  cout<<"Enter stock added";
	  cin>>more_stock;
	  dummy.update(NO,more_stock); break;
 }
 cout<<"Continue ?";
 cin>>ans;
 }while(ans=='y'||ans=='Y');
}

/*
Output:
Give filename:Ankit.txt

1.Create
2.Append
3.Display
4.Purchase
5.Update
Your choice:1
File created
Continue ?y

Your choice:2
Give book no.:1
Give book title:Wings of Fire
Enter price:200
Enter stock:30
Any more books to be added ?y
Give book no.:2
Give book title:Enlighted Minds
Enter price:200
Enter stock:50
Any more books to be added ?y
Give book no.:3
Give book title:Tale of two cities
Enter price:150
Enter stock:60
Any more books to be added ?n
Continue ?y

Your choice:3
Enter book no.2
Book no.:2
Book name:Enlighted Minds
Cost Rs.200
Stock left:50
Continue ?y

Your choice:4
Enter no. of books to be purchased (<=15) :2
Enter book no.1
Enter no. of copies:2
Enter book no.3
Enter no. of copies:3

Press any key for bill.
--------------------------------------------------------------------------------
				 XYZ BOOK STORES
--------------------------------------------------------------------------------
Book no.Copies  Title                   Rate    Cost
1       2       Wings of Fire           200     400
3       3       Tale of two cities      150     450
--------------------------------------------------------------------------------
Grand Total                                     850
--------------------------------------------------------------------------------
Continue ?y

Your choice:3
Enter book no.1
Book no.:1
Book name:Wings of Fire
Cost Rs.200
Stock left:28
Continue ?y

Your choice:3
Enter book no.3
Book no.:3
Book name:Tale of two cities
Cost Rs.150
Stock left:57
Continue ?y

Your choice:5
Give book no. of book to be updated:2
Enter stock added:20
Continue ?y

Your choice:3
Enter book no.2
Book no.:2
Book name:Enlighted Minds
Cost Rs.200
Stock left:70
Continue ?n
*/







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




