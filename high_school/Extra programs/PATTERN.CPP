/* THIS PROGRAM INPUTS A STRING AND THEN PRINTS AN INTERESTING PATTERN.
	PROGRAM DEVELOPED BY ANKIT JAIN XI-D.
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 cout<<"PLEASE ENTER A STRING:";
 char st[20];
 gets(st);
 int l=strlen(st);
 if (l%2==0)
  {
	int k=l/2-1,n=l/2;
	for(int i=1;i<=l/2;i++,k--,n++)
	 {
	  for(int j=l/2;j>i;j--)
		cout<<" ";
	  cout<<st[k];
	  for(int m=1;m<i;m++)
		cout<<"  ";
	  cout<<st[n];
	  cout<<endl;
	 }
  }
 else
  {
	int k=l/2-1,n=l/2+1;
	for(int s=l/2;s>=1;s--)
	 cout<<" ";
	cout<<st[l/2];
	cout<<endl;
	for(int i=2;i<=l/2+1;i++,k--,n++)
	{
	 for(int j=l/2;j>=i;j--)
	  cout<<" ";
	 cout<<st[k]<<" ";
	 for(int m=2;m<i;m++)
	  cout<<"  ";
	 cout<<st[n];
	 cout<<endl;
	}
  }
 getch();
}
