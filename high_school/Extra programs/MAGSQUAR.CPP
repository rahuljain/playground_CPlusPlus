#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int ar[10][10],n,r,c,x,y;
   cout<<"Enter size of the side:";cin>>n;
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
       ar[i][j]=0;
    //creation of magic square
	r=0;c=n/2;
	ar[r][c]=1;

    for(int a=2;a<=n*n;a++)
    {     x=r-1;y=c+1;
	if(x<0)x=n-1;
	if(y==n)y=0;
	if(ar[x][y]==0){r=x;c=y;}
		else { if(x==0)r=0;
			 if(y==n)y=n-1;
		     }
     ar[r][c]=a;
     }
   cout<<"\nThe magic square is:\n";
   for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
	 cout<<ar[i][j]<<" ";
     cout<<endl;
   }
  getch();
}//main ends