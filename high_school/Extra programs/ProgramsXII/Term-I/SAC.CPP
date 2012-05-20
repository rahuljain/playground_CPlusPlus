#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class bas
 {
  protected:
  int bassal;
  float da;
  float hra;
  int it;
  int crl;
 };

class various
 {
  protected:
  char empname[20];
  int empno;
  char des[20];
  char add[100];
 };

class fin:basvarious
 {
  int totsal;
  int totded;
  long netsal;
  void calctotsal()
   { cout<<calculating the total salary of the employee<<endl;
totsal=bassal+(da+hra)*(bassal)/100; }
  void calctotded()
   {cout<<calculating total deductions of the employee<<endl;
totded=(it+crl)/12; }
  void calcnetsal()
   { cout<<calculating net salary of the employee<<endl;
netsal=totsal-totded; }
  void payslip()
   {
	 cout<<"\n    PAYSLIP\n";
    cout<<" employee name "<<empname<<'\n';
    cout<<" employee number: "<<empno<<'\n';
    cout<<" designation "<<des<<'\n';
    cout<<" address: "<<add<<'\n';
    cout<<"basic salary: "<<bassal<<'\n';
    cout<<"total salary: "<<totsal<<'\n';
	 cout<<"total deductions: "<<totded<<endl;
    cout<<"net salary: "<<netsal<<endl;
   }
  public:
  void read()
   {
    cout<<"Enter the various employees details \n  name - ";
	 gets(empname);
    cout<<" nuber of the employee - ";
    cin>>empno;
    cout<<"  designation of the employee- ";
    gets(des);
    cout<<"  address of the employee- ";
    gets(add);
	 cout<<"  basic salary - Rs.";
    cin>>bassal;
    cout<<"  DA% - ";
    cin>>da;
    cout<<"  HRA - ";
    cin>>hra;
    cout<<"  income tax(per year) - Rs.";
	 cin>>it;
    cout<<"  car loan(per year) - Rs.";
    cin>>crl;
    calctotsal();
    calctotded();
    calnetsal();
    payslip();
	}
};

void main()
 {
  E dummy;
  char answ;

  do
   {
    clrscr();
    dummy.read();
    cout<<"\nDo you want to continue(y/n): ";
    cin>>answ;
	} while(answ=='y'||answ=='Y');
 }
/*                    OUTPUT
Enter the various employees details
  name - abhilash
  number of the employee - 87
  designation of the employee- gm
  address of the employee- 211 crossroads
  basic salary - Rs.1000
  DA% - 10
  HRA - 20
  income tax(per year) - Rs.1000
  car loan(per year) - Rs.2000

	 PAYSLIP
 employee name:abhilash
  employee number: 87
 designation: gm
address: 211 crossroads
basic salary: 1000
total salary: 1300
total deductions: 250
net salary: 1050

Do you want to continue(y/n): n

*/

























//program to craeate,append,update etc. in a file
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

struct B
 {
  int book_no;
  char title[20];
  float price;
  int stock;
 };

fstream f;

class X
 {
  public:

  void read(B&T)
   {
    cout<<"Book No: ";
    cin>>T.book_no;
    cout<<"Book title: ";
    gets(T.title);
    cout<<"Give the price of book: ";
    cin>>T.price;
    cout<<"stock: ";
    cin>>T.stock;
   }

  void create()
   {
    char fname[20];
    cout<<"Give the filename: ";
    gets(fname);
    f.open(fname,ios::out);
    f.close();
   }

  void append()
   {
    B Temp;
    char fname[20];
    cout<<"Give the filename: ";
    gets(fname);
    f.open(fname,ios::app);
    read(Temp);
    f.write((char*)&Temp,sizeof(Temp));
    f.close();
  }

  void display(B Temp)
   {
    cout<<"Book number:"<<Temp.book_no<<endl;
    cout<<"Book title:"<<Temp.title<<endl;
    cout<<"Price:"<<Temp.price<<endl;
    cout<<"stock:"<<Temp.stock<<endl;
   }

  void read_file()
   {
    char fname[20];
    cout<<"Give the filename: ";
    gets(fname);
    B Temp;
    cout<< "\nThe File Contents are....\n\n";
    f.open(fname,ios::in);
    f.read((char*)&Temp,sizeof(Temp));
    while(f)
     {
      display(Temp);
      f.read((char*)&Temp,sizeof(Temp));
      cout<<'\n';
     }
    f.close();
   }

 void find()
  {
   int no;
   char fname[20];
   B Temp;
   cout<<"Give the filename: ";
   gets(fname);
   cout<<"Give the book no: ";
   cin>>book_no;

   f.open(fname,ios::in);
   f.read((char*)&Temp,ios::in);
   while(f)
    {
     if (no==Temp.book_no)
     display(Temp);
     f.read((char*)&Temp,sizeof(Temp));
    }
   f.close();
  }


 void purchase()
  {
  char opt;
  char fname[15];
  B Temp;

  cout<<"Give the filename:";
  gets(fname);

  do
   {
    int no;
    cout<<"Give the book no: ";
    cin>>no;
    int s;
    cout<<"How many books you want: ";
    cin>>s;

    f.open(fname,ios::in|ios::out);
    f.read((char*)&Temp,sizeof(Temp));
    int n=0;

    while(f)
     {
      n++;
      if(no==Temp.book_no);
      f.read((char*)&Temp,sizeof(Temp));
     }
     if(Temp.stock<s)cout<<"Not enough stock.\n";
     else
      {
       Temp.stock-=s;
       cout<<"\n         BILL:"<<endl;
       cout<<"Book title: "<<Temp.title<<endl;
       cout<<"Money to paid: "<<(s)*(Temp.price)<<endl;

       f.close();
       f.open(fname,ios::in);
       f.seekp((n-1)*sizeof(Temp));
       f.write((char*)&Temp,sizeof(Temp));
      }
     f.close();
     cout<<"Do you want to pu

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class basic
 {
  protected:
  int basic_salary;
  float da;
  float hra;
  int income_tax;
  int car_loan;
 };

class details
 {
  protected:
  char name[20];
  int no;
  char designation[20];
  char address[100];
 };

class E:basic,details
 {
  int total_salary;
  int total_deduction;
  long net_salary;
  void cal_ts()
   { total_salary=basic_salary+(da+hra)*(basic_salary)/100; }
  void cal_td()
   { total_deduction=(income_tax+car_loan)/12; }
  void cal_ns()
   { net_salary=total_salary-total_deduction; }
  void payslip()
   {
	 cout<<"\n    PAYSLIP\n";
    cout<<"employee name: "<<name<<'\n';
    cout<<"employee number: "<<no<<'\n';
    cout<<"designation: "<<designation<<'\n';
    cout<<"address: "<<address<<'\n';
    cout<<"basic salary: "<<basic_salary<<'\n';
    cout<<"total salary: "<<total_salary<<'\n';
	 cout<<"total deductions: "<<total_deduction<<endl;
    cout<<"net salary: "<<net_salary<<endl;
  ayslip
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class basic
{
 protected:
 long basicsal;
 float DA;
 float HRA;
 long incometax;
 int carloan;
};

class details:protected basic
{
 protected:
 char empname[20];
 long empno;
 char empdes[20];
 char add[40];
};

class emp:protected details
{
 protected:
 long totalsal;
 long totalded;
 long netsal;
 void tsal(){totalsal=basicsal+DA+HRA;}
 void tded(){totalded=incometax+carloan;}
 void nsal(){netsal=totalsal-totalded;}
 void payslip()
 {
  cout<<"employee name:"<<empname<<endl;
  cout<<"employee number:"<<empno<<endl;
  cout<<"designation:"<<empdes<<endl;
  cout<<"address:"<<add<<endl;
  cout<<"basic salary:"<<basicsal<<endl;
  cout<<"total salary:"<<totalsal<<endl;
  cout<<"total deductions:"<<totalded<<endl;
  cout<<"net salary:"<<netsal<<endl;
 }
 public:
 void read()
 {
  cout<<"Enter basic salary:";
  cin>>basicsal;
  cout<<"Enter the DA percent:";
  cin>>DA;
  DA=(DA*basicsal)/100;
  cout<<"Enter HRA:";
  cin>>HRA;
  cout<<"Enter the employee name:";
  gets(empname);
  cout<<"Enter the employee number:";
  cin>>empno;
  cout<<"Enter the designation:";
  gets(empdes);
  cout<<"Enter the address:";
  gets(add);
  incometax=10000/12;
  carloan=5000;
  tsal();
  tded();
  nsal();
  payslip();
 }
};

void main()
{
 emp e;
 char opt;
 do
  {
   clrscr();
   e.read();
   cout<<"Do you want to continue(y/n): ";
   cin>>opt;
  } while(opt=='Y'||opt=='y');
}
/*			     OUTPUT
Enter basic salary:6000
Enter the DA percent:1
Enter HRA:4
Enter the employee name:aa
Enter the employee number:1
Enter the designation:bb
Enter the address:cc
employee name:aa
employee number:1
designation:bb
address:cc
basic salary:6000
total salary:6064
total deductions:5833
net salary:231
Do you want to continue(y/n): n
*/





































//This program is to do various functions in a file.
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>

struct book
{
 long bno;
 char bt[40];
 int price;
 int stock;
};

fstream f;
class S
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
   cin>>B.bno;
   cout<<"Give the book title:";
   gets(B.bt);
   cout<<"Give the price:";
   cin>>B.price;
   cout<<"Give the stock:";
   cin>>B.stock;

   f.write((char*)&B,sizeof(B));
   cout<<"Do you want to append more?";
   cin>>opt;
  }while(opt=='y'||opt=='Y');
  f.close();
 }

 void display()
 {
 int Bnumber;
 cout<<"Give the book number:";
 cin>>Bnumber;
 char fname[15];
 cout<<"Give the file name:";
 gets(fname);

 f.open(fname,ios::in);
 f.read((char*)&B,sizeof(B));

 while(f)
 {
  if(Bnumber==B.no)
  {
   cout<<"Book number:"<<B.no<<endl;
   cout<<"Book title:"<<B.title<<endl;
   cout<<"Price:"<<B.price<<endl;
   cout<<"stock:"<<B.stock<<endl;
  }
  f.read((char*)&B,sizeof(B));
 }
 f.close();
}

void dis_rec()
{
 char fname[15];
 cout<<"Give the filename:";
 gets(fname);
 book temp;
 cout<<"The file content is:"<<endl;

 f.open(fname,ios::in);
 f.read((char*)&temp,sizeof(temp));

 while(f)
 {
  cout<<"Book number:"<<temp.bno<<endl;
  cout<<"Book title:"<<temp.bt<<endl;
  cout<<"Price:"<<temp.price<<endl;
  cout<<"stock:"<<temp.stock<<endl;

  f.read((char*)&temp,sizeof(temp));
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
  int n=0;
  book B1;

  while(f)
  {
   n++;
   if(Bno==B.bno)B1=B;
   f.read((char*)&B,sizeof(B));
  }
  if(B1.stock<s)cout<<"Sorry!Not enough stock.";
  else
  {
   B1.stock-=s;
   cout<<"Your bill:"<<endl;
   cout<<"Book title:"<<B1.bt<<endl;
   cout<<"Total money to pay:"<<(s)*(B1.price)<<endl;

   f.close();
   f.open(fname,ios::in);
   f.seekp((n-1)*sizeof(B1));
   f.write((char*)&B1,sizeof(B1));
  }
  f.close();
  cout<<"Want to purchase more?";
  cin>>o;
 }while(o=='y'||o=='Y');
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
  if(Bno==B.bno)
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
};

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
/*                       OUTPUT
1. To create a file.
2. To append.
3. To update.
4. To purchase.                                                                 
5. To display all records.                                                      
6. To exit.
Give your choice:1
Give the filename:a.dat
Do you want to continue?y

1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:2
Give the filename:a.dat
Give the book number:1
Give the book title:aa
Give the price:98
Give the stock:5
Do you want to append more?y
Give the book number:2
Give the book title:bb
Give the price:67
Give the stock:9
Do you want to append more?y
Give the book number:3
Give the book title:cc
Give the price:130
Give the stock:6
Do you want to append more?n
Do you want to continue?y

1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:3
Give the filename:a.dat
Book number of the record to be updated:1
New stock:6
Do you want to continue?y

1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:4
Give the filename:a.dat
Enter the number of the book you want to buy:
3
How many books of number 3 do yo want to buy:4
Your bill:
Book title:cc
Total money to pay:520
Want to purchase more?n
Do you want to continue?y

1. To create a file.
2. To append.
3. To update.
4. To purchase.
5. To display all records.
6. To exit.
Give your choice:5
Give the filename:a.dat
The file content is:
Book number:1
Book title:aa
Price:98
stock:6
Book number:2
Book title:bb
Price:67
stock:9
Book number:3
Book title:cc
Price:130
stock:3
Do you want to continue?n
*/







