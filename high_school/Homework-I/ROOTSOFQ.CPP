#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,d,D,root1,root2;
cout<<"Let a quadratic equation be: ax^2 + bx + c = 0 "<<"\n";
cout<<"where a is the coefficient of x^2, b is the coefficient of x and c is a constant"<<"\n";
cout<<"Enter the value of a"<<"\n";
cin>>a;
cout<<"Enter the value of b"<<"\n";
cin>>b;
cout<<"Enter the value of c"<<"\n";
cin>>c;
D=(b*b)-(4*a*c);
  if (D>=0)
		{
		 root1=(-b+sqrt(D))/(2*a);
		 root2=(-b-sqrt(D))/(2*a);
		 cout<<"The roots of the quadratic equations are: "<<root1<<" and "<<root2;
		}
  else
		{
		 d=sqrt(-D)/(2*a);
		 cout<<"The roots of the quadratic equation are: "<<"\n"<<(-b)/(2*a)<<" + "<<d<<"i"<<" and "<<(-b)/(2*a)<<" - "<<d<<"i"<<"\n";
		}
getch();
}
