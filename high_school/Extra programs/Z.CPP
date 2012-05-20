#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
  cout<<"*";
 cout<<endl;
 for(int j=n-2;j>0;j--)
 {
  for(int k=j;k>0;k--)
	cout<<" ";
  cout<<"*";
  cout<<endl;
 }
 for(i=1;i<=n;i++)
  cout<<"*";
}