/*
Read an Array of structure with:-
a)School code
b)School name
c)No. of students in the school.

Perform the following operations:-
1. Sort either by code or by name as per the user choice.
2. Search for a either a School code or School name as per the user
   choice.
3. Create an another array having the same structure and merge the
   arrays.
4. Display the arrays.
*/

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct School
{
 int Code;
 char Name[15];
 int number;
}s[5];

const int n=4;

void Sorting();
void Searching();
void Merging();
void Displaying();

void main()
{
 clrscr();

 for(int q=0;q<n;q++)
 {
  cout<<q+1<<".\t1 Code : ";
  cin>>s[q].Code;

  cout<<q+1<<".\t2 Name : ";
  cin>>s[q].Name;

  cout<<q+1<<".\t3 Number of Students : ";
  cin>>s[q].number;
  cout<<endl;
 }

 X:
 clrscr();
 int opt;
 cout<<"1. Sort"<<endl;
 cout<<"2. Search"<<endl;
 cout<<"3. Merge"<<endl;
 cout<<"4. Display"<<endl;
 cout<<                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                [w+1];
    s[w+1] = temp;
   }
  }
  cout<<endl<<"Sorting Complete.";
 }

 else if(type==2)
 {
  for(int q=1;q<n;q++)
  {
   int w=q-1;
   School temp = s[q];

   while(w>=0&&(strcmp(temp.Name,s[w].Name)<0))
   {
    s[w+1] = s[w];
    w--;
   }

   w++;
   s[w] = temp;
  }
  cout<<endl<<"Sorting Complete.";
 }
 Displaying();
}

void Searching()
{
 int type;
 cout<<endl<<"Search on basis of Code[1]/Name[2] : ";
 cin>>type;

 if(type==1)
 {
  int Code;
  int st = 0,lt = n-1,pos=-1;
  cout<<endl<<"Enter Code : ";
  cin>>Code;

  while((lt-st)>=0)
  {
   int mid = (st+lt)/2;
   if(Code==s[mid].Code)
   {
    pos=mid;
    st = n;
   }

   else if(Code<s[mid].Code)
   lt = mid-1;
   else		st = mid+1;
  }

  if(pos!=-1)
  {
   cout<<endl<<"Element found. ";
   cout<<endl<<"Code : "<<s[pos].Code;
   cout<<endl<<"Name : "<<s[pos].Name;
   cout<<endl<<"Number of Students : "<<s[pos].number;
  }
  else    cout<<endl<<"Element not found.";
 }

 else
 {
  char Name[15];
  int st = 0,lt = n-1,pos=-1;
  cout<<endl<<"Enter Name to be Searched : ";
  cin>>Name;

  while((lt-st)>=0)
  {
   int mid = (st+lt)/2;
   if(strcmp(Name,s[mid].Name)==0)
   {
    pos=mid;
    st = n;
   }
   else if(strcmp(Name,s[mid].Name)<0)
   lt = mid-1;

   else       st = mid+1;
  }

  if(pos!=-1)
  {
   cout<<endl<<"Element found. ";
   cout<<endl<<"Code : "<<s[pos].Code;
   cout<<endl<<"Name : "<<s[pos].Name;
   cout<<endl<<"Number of Students : "<<s[pos].number;
  }

  else
  cout<<endl<<"Element not found.";
 }
 getch();
}

void Displaying()
{
 for(int q=0;q<n;q++)
 {
  cout<<endl<<q+1<<".1 Code : "<<s[q].Code;
  cout<<endl<<q+1<<".2 Name : "<<s[q].Name;
  cout<<endl<<q+1<<".3 Number of Students : "<<s[q].number;
 }
 getch();
}

void Merging()
{
 const int n1 = 3;
 School o[n1];
 School m[n+n1];

 for(int q=0;q<n1;q++)
 {
  cout<<q+1<<".\t1 Code : ";
  cin>>o[q].Code;
  cout<<q+1<<".\t2 Name : ";
  cin>>o[q].Name;
  cout<<q+1<<".\t3 Number of Students : ";
  cin>>o[q].number;
 }

 int i = 0,j = 0,counter = 0;

 while(i<n1&&j<n)
 {
  if(s[j].Code<=o[i].Code)
  {
   m[counter] = s[j];
   j++;
   counter++;
  }
  else if(s[j].Code>o[i].Code)
  {
   m[counter] = o[i];
   i++;
   counter++;
  }
 }

 if(i>=n)
 {
  for(int q=j;q<n;q++)
  {
   m[counter] = s[q];
   counter++;
  }
 }
 else
 {
  for(int w=i;w<n1;w++)
  {
   m[counter] = o[w];
   counter++;
  }
 }

 for(int a=0;a<(n+n1);a++)
 {
  cout<<endl<<a+1<<".1 Code : "<<m[a].Code;
  cout<<endl<<a+1<<".2 Name : "<<m[a].Name;
  cout<<endl<<a+1<<".3 Number of Students : "<<m[a].number;
 }
 getch();
}

/*
	Output:-
1. Sort
2. Search
3. Merge
4. Display
5. Exit

Give your option : 1

Sort on basis of Code[1]/Name[2] : 1

Sorting Complete.
1.1 Code : 6
1.2 Name : mahavira
1.3 Number of Students : 4567
2.1 Code : 7
2.2 Name : modern
2.3 Number of Students : 3456
3.1 Code : 8
3.2 Name : dps
3.3 Number of Students : 2345
4.1 Code : 9
4.2 Name : spv
4.3 Number of Students : 1234

Give your option : 2

Search on basis of Code[1]/Name[2] : 2

Enter Name to be Searched : modern

Element found.
Code : 7
Name : modern
Number of Students : 3456
*/