
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll a[n+3];
  for(int i=0;i<n;i++)
   cin>>a[i];
   ll tg;
   ll res=0;
   sort(a, a+n);
   tg=(a[n-1]+a[0])/2;
   for(int i=0;i<n;i++)
    res+=abs(tg-a[i]);
    cout<<res;
    
    }
    



