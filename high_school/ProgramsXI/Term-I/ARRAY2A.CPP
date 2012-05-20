#include<iostream.h>
#include<conio.h>
void main()
{
int a[100], n ,high, low, av, highctr=0, lowctr=0;
cout<<"How many nos. do u wanna enter? " ;
cin>>n;
for(int i=0; i<n; i++)
cin>>a[i];
high=low=a[0];
for(i=1; i<n; i++)
{
if(a[i]>high)
high=a[i];
if(a[i]<low)
low=a[i];
}
cout<<"Highest element= "<<high;
cout<<"Lowest element= "<<low;
av=0.5*(float(high)+float(low));
for(i=0;i<n;i++)
{
if(a[i]>av)
highctr++;
if(a[i]<av)
lowctr++;
}
cout<<"No. of elemnts above average" <<highctr;
cout<<"No. of elements below average  "<<lowctr;
getch();
}
