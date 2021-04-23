#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Res(ll n)
{
	int d[n+5]={};
	queue<ll> res;
	if(6%n==0) return 6;
	if(8%n==0) return 8;
	res.push(6);
	res.push(8);
	d[6%n]=1;
	d[8%n]=1;
	while(res.size()>0)
	{
		ll t=res.front();
		res.pop();
		ll u=t*10+6;  if(u%n==0) return u;
		ll v=t*10+8;  if(v%n==0) return v;
		if(d[u%n]==0)
		res.push(u);
		if(d[v%n]==0)
		res.push(v);
	 } 
	 return 0;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n;
	cin>>n;
	cout<<Res(n);
	
}


