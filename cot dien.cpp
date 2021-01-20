#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll C(ll k, ll n)
{
	if(k==0||k==n)
	 return 1;
	if(k==1) return n;
	return C(k-1, n-1)+C(k, n-1);
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  map<ll, ll>save;
  ll n;
  cin>>n;
  ll a;
  for(int i=0;i<n;i++)
   {
   	cin>>a;
   	save[a]++;
   }
   ll res=0;
   for(auto it:save)
   { if(it.second >=2)
   res+=C(2, it.second);
}
   cout<<res;
}
   
  

