#include<bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, k;
  cin>>n>>k;
  int res=1;
  for(int i=1;i<n;i++)
  res*=(k-1);
  cout<<k*res;
   
	}
   
    
  
  

