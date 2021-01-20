#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll giaithua(ll n){
	if(n==0 || n==1)
	 return 1;
	return giaithua(n-1)*n;
	
	 
}
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
    ll res;
    if(demchan-2!=0)
    res=giaithua(demchan-2)+giaithua(demle-1)*demchan;
    else
    res=giaithua(demle-1)*demchan;
    cout<<res;
    
}
    

