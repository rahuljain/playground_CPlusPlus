//This program finds out the area of some geometrical figures.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
float rtp(float b,float h);
float cirsqr(float a);

void main()
{
 clrscr();
 char ans;

 do
  {
	char option;
	float b,h,a,area;
	cout<<"Of which geometrical figure do you want to find out the area? ";
      cout<<'\n';
	cout<<"Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): ";
	cin>>option;

     switch(option)
       {
	case 'r':
	case 'R':cout<<"Enter the value of base and height: ";
		 cin>>b>>h;
		 area=rtp(b,h);
		 cout<<"Area= "<<area<<" units"<<'\n';
		 break;

	case 's':
	case 'S':cout<<"Enter the side of the square: ";
		 cin>>a;
		 area=cirsqr(a);
		 cout<<"Area= "<<area<<" units"<<'\n';
		 break;

	case 'C':
	case 'c':cout<<"Enter the radius of the circle: ";
		 cin>>a;
		 area=3.14*cirsqr(a);
		 cout<<"Area= "<<area<<" units"<<'\n';
		 break;

	case 't':
	case 'T':cout<<"Enter the value of the base and the height of the triangle: ";
		 cin>>b>>h;
		 area=(0.5)*(rtp(b,h));
		 cout<<"Area= "<<area<<" units"<<'\n';
		 break;

	case 'p':
	case 'P':cout<<"Enter the value of the base and the height: ";
		 cin>>b>>h;
		 area=rtp(b,h);
		 cout<<"Area= "<<area<<" unit"<<'\n';
		 break;
       }

  cout<<endl<<endl<<endl;
  cout<<"Do you want to continue once more? ";
  cin>>ans;
 }
while(ans=='y'||ans=='Y');
}


float rtp(float b, float h)
 {
   return b*h;
 }

float cirsqr(float a)
 {
   return a*a;
 }



/*


Output:


Of which geometrical figure do you want to find out the area?
Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): r
Enter the value of base and height: 4 5
Area= 20 units



Do you want to continue once more? y
Of which geometrical figure do you want to find out the area?
Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): s
Enter the side of the square: 4
Area= 16 units



Do you want to continue once more? y
Of which geometrical figure do you want to find out the area?
Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): c
Enter the radius of the circle: 5
Area= 78.5 units



Do you want to continue once more? y
Of which geometrical figure do you want to find out the area?
Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): t
Enter the value of the base and the height of the triangle: 4 5
Area= 10 units



Do you want to continue once more? y
Of which geometrical figure do you want to find out the area?
Rectangle, square, circle, triangle, parallelogram(r,s,c,t,p): p
Enter the value of the base and the height: 6 7
Area= 42 unit



Do you want to continue once more? n


*/
