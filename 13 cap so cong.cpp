#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll x, y;
  cin>>x>>y;
  if(x>y)
  swap(x, y);
  ll min=x/13-1, max=y/13+1;
  ll res=(x+y)*(y-x+1)/2;
  while(true)
  {
  	if(13*min<x)
  	min++;
  	if(13*max>y)
  	max--;
  	if(13*min>=x && 13*max<=y)
  	break;
}
    ll res2;
    res2=((13*max +13*min)*(max-min+1))/2;
 
   res=res-res2;
   cout<<res;
}

