void print_column_sum(int P[100][100],int x,int y)
{
 int sum,total=0;
 for(int i=0;i<y;i++)
 {
  sum=0;
  for(int j=0;j<x;j++)
  sum+=P[j][i];
  total+=sum;
  cout<<setw(5)<<sum;
 }
 cout<<setw(10)<<total;
}