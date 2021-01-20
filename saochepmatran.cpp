#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int N, M;
  cin>>N>>M;
  
  int a[50][50], b[50][50];
  for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
	   cin>>a[i][j];
for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
	   b[i][j]=a[i][j];
	for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
	   cout<<b[i][j];
	   }



