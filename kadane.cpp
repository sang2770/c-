#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(ll *a, ll n)
{
    ll end=0;
	ll max=0;
for(int i=0;i<n;i++)
 {
 	end+=a[i];
 	if(end <=0)
 	 end=0;
 	else 
 	if(max<end)
 	 max=end;
 	 }
 	return max;
 	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll a[n+1], max=-10000000000;
  
  for(int i=0;i<n;i++)
   {cin>>a[i];
     if(max<a[i])
      max=a[i];
      }
    ll res=sum(a, n);
    
   if(res==0)
   cout<<max;
   else
   cout<<res;
   }
  

