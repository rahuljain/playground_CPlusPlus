#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int n, roll[50];
float per[50], T;
char name[50][50];
cout<<"No. of students? ";
cin>>n;
cout<<endl<<endl;

for(int i=0; i<n; i++)
{
cout<<"Roll No.: ";
cin>>roll[i];
cout<<"Name: ";
gets(name[i]);
cout<<"Percentage: ";
cin>>per[i];
}

for(int p=0; p<n; p++)
for(int j=p+1; j<n; j++)
{
if(per[p]<per[j])
{
T=per[p];
per[p]=per[j];
per[j]=T;

char N[50];
strcpy(N,name[p]);
strcpy(name[p],name[j]);
strcpy(name[j],N);

int A=roll[p];
roll[p]=roll[j];
roll[j]=A;
}
}

for(int k=0; k<n; k++)
cout<<roll[k]<<'\t'<<name[k]<<'\t'<<per[k]<<endl;


getch();
}