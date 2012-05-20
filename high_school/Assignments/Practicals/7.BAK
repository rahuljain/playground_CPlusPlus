#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
clrscr();
char str[15], chk[20];
int m=0,n;

cout<<"Enter the string: ";
gets(str);
for(int i=0; str[i]!='\0'; i++);

for(int j=0; j<=i ; j++)
{
 chk[m]=str[j];

 n=0;
 for(int k=0; k<i; k++)
  {
   if(str[k]==str[j])
      n++;
  }
 cout<<endl<<str[0]<<'\t\t'<<n<<endl;
}

int p=1;
while(p<i)
{
 n=0;
 int flag=0;

 for(int c1=0 ; c1<m ;c1++)
   {
    if(chk[c1]==str[p])
	 flag=1;
    }

  if(flag==0)
     chk[++m]=str[c1];
  else
     p++;

 for(int k=p; k<i; k++)
  {
   if(str[k]==str[p])
      n++;
  }
 cout<<endl<<str[p]<<'\t\t'<<n<<endl;
p++;
}

for(int s=0; s<m; s++)
cout<<endl<<endl<<endl<<chk[s];

getch();
}