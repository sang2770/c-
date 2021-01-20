#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll res=0;
  ll x, y;
  cin>>x>>y;
  if(x>y)
   swap(x, y);
  for(int i=x;i<=y;i++)
   if(i%13==0)
    res+=i;
    cout<<res;
}
  

