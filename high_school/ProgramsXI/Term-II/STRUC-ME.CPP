#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct S
{
int roll; float per; char name[50];
};

void main()
{
clrscr();
int n;
cout<<"How many student? ";
cin>>n;
S stu[10];
for(int i=0; i<n; i++)
{
cout<<endl<<endl<<"Roll No.: ";
cin>>stu[i].roll;
cout<<endl<<"Name: ";
gets(stu[i].name);
cout<<endl<<"Percentage: ";
cin>>stu[i].per;
}

for(i=0; i<n-1; i++)
for(int j=i+1; j<n; j++)
{
if(stu[i].per<stu[j].per)
{
S t=stu[i];
stu[i]=stu[j];
stu[j]=t;
}

if(stu[i].per==stu[j].per)
{
S t;
if(strcmp(stu[i].name, stu[j].name)>0)
    {
      t=stu[i];
      stu[i]=stu[j];
      stu[j]=t;
    }
}
}
cout<<endl<<"The merit list is: "<<endl;
for(int k=0; k<n; k++)
cout<<stu[k].roll<<'\t'<<stu[k].name<<'\t'<<stu[k].per<<endl;
getch();
}

/*

Output:

How many student? 4


Roll No.: 24

Name: Rahul

Percentage: 87


Roll No.: 33

Name: Raghav

Percentage: 67


Roll No.: 45

Name: Kartik

Percentage: 87


Roll No.: 22

Name: Aditya

Percentage: 67

The merit list is:
45      Kartik  87
24      Rahul   87
22      Aditya  67
33      Raghav  67


*/








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
