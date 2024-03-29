/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

To make a magic square of nth dimension.
*/

#include <iomanip.h>
#include<conio.h>
#include<iostream.h>

void main()
{
 clrscr();

 int dimension;
 cout<<"Size (less than 10) : ";
 cin>>dimension;
 cout<<endl<<endl;

 int square[10][10]={0};
 int c,r;
 int i=0,j=(dimension-1)/2;
 int size=dimension*dimension;

 square[i][j]=1;

 for(int count=2;count<=size;count++)
 {
  if(i<1) r=dimension-1;
  else r=i-1;

  if(j<1) c=dimension-1;
  else c=j-1;

  if(square[r][c]!=0)		i++;
  else
  {
   i=r;    j=c;
  }

  square[i][j]=count;
 }

  cout<<"Magic Square of Size "<<dimension<<" :-\n\n";
  for(i=0;i<dimension;i++)
  {
   for(j=0;j<dimension;j++)
   cout<<setw(5)<<square[i][j];
   cout<<endl;
  }
 getch();
}

/*
	Output:-
Size (less than 10) : 5

Magic Square of Size 5 :-

   15    8    1   24   17
   16   14    7    5   23
   22   20   13    6    4
    3   21   19   12   10
    9    2   25                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  3ɻ �V��F����  �V��F�F�~� |�u�~��r���P�P���  3�P�6�'�  P�P�
 P���  3�_^��]� U�����'�F���'�F�3�P�6�'�  P�P�
 P���  ���  RP���  = t�F���'�F���'�����]�U��V�v�� u�T&�D ������^]� U���V�v�F u� �^��F����v��v��F�@�v�P���  �^�&�?.t���P�@P���  �t�CP3�3�PR���  3��A��P�gP���  �V��F��t&�^�&��P�rP�F�P���  ��
�wP�F�P븋�^��]� [  �G  �< : � 
 � 9
 �    r> j a> j N> j => j )< K #<  < � 
 �      �> j �> j �G ��c �	 � [ �> j �> j � 2 g> j Z � S. � Kc �	 > j �> j � �