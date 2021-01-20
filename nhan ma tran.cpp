#include<bits/stdc++.h>
using namespace std;

void  nhap(int *p, int n, int m)
{
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
	   cin>>*(p+i*m+j);
	}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int m, n, p;
  cin>>m>>n>>p;
  int a[m][n], b[n][p];
   nhap(a, m, n);
   nhap(b, n, p);
   int c[m+2][p+2];
   for(int i=0;i<m;i++)
    for(int j=0;j<p;j++)
     {
     	int res=0;
     	for(int k=0;k<n;k++)
     	 res+=a[i][k]*b[k][j];
     	c[i][j]=res;
     	}
    for(int i=0;i<m;i++)
     { for(int j=0;j<p;j++)
       cout<<c[i][j]<<" ";
       cout<<"\n";}	 
}
  


