#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int A[100], n, employee=0;
cout<<"Salary of how many employees do you wnt to enter? ";
cin>>n;
cout<<"Enter the monthly salary of each employee: "<<'\n';
for(long int i=0; i<n; i++)
{
cin>>A[i];
if( (A[i]*12) > 500000)
employee++;
}

cout<<employee<<" out of "<<n<<" employees are earning more than 5 lakhs per year.";
getch();
}

/*
Output:
Salary of how many employees do you wnt to enter? 5
Enter the monthly salary of each employee:
100000
12000
50000
45000
40000
3 out of 5 employees are earning more than 5 lakhs per year.


*/