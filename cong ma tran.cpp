#include<bits/stdc++.h>
using namespace std;
void nhap(int *p, int m, int n)
{
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
	  cin>>*(p+i*n+j);
	  }
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int m, n;
  cin>>m>>n;
  int *a=(int *)malloc(m*n*sizeof(int));
  int *b=(int *)malloc(m*n*sizeof(int));
  nhap(a, m, n);
  nhap(b, m, n);
  for(int i=0;i<m;i++)
  {
   for(int j=0;j<n;j++)
    printf("%7d",*(a+i*n+j)+*(b+i*n+j));
	printf("\n");
	}
	}
  



