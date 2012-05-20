//THIS PROGRAM FINDS THE ROOTS OF A QUADRATIC EQUATION.
//PROGRAM DEVELOPED BY ANKIT JAIN.
# include<iostream.h>
# include<math.h>
void main()
{
 float a,b,c,D,x1,x2;
 cout<<"\nPLEASE ENTER THE COEFFICIENT OF X-squared (i.e first term) ";
 cin>>a;
 cout<<"ENTER COEFFICIENT OF X (i.e. middle term) ";
 cin>>b;
 cout<<"ENTER CONSTANT TERM ";
 cin>>c;
 D=(b*b)-(4*a*c);
 x1= (-b+sqrt(D))/(2*a);
 x2= (-b-sqrt(D))/(2*a);
 cout<<"FIRST ROOT IS "<<x1<<'\a'<<'\a';
 cout<<"\nSECOND ROOT IS "<<x2<<'\a'<<'\a';
}
