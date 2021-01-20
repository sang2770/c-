#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, k, x, y;
  cin>>n>>k>>x>>y;
  int tg=n-k;
  int res;
  if(k<=n)
  res=x*k+tg*y;
  else
  res=x*n;
  cout<<res;
  
  }



