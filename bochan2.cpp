#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll demchan=0, demle=0;
  ll a[n+1];
  for(int i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]%2==0)
     demchan++;
    else demle++;
    }
    ll res=((demle*(demle-1)/2)*demchan)+(demchan*(demchan-1)*(demchan-2)/6);
    cout<<res;
    }
    
    

