#include<bits/stdc++.h>
using namespace std;
#define ll long long//so 6 8 lam lai

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n;
	cin>>n;
	//thaut toan bfs
	queue<ll> Q;
	ll a[n+1]={};
	if(6%n==0)
	{
		cout<<6; return 0;
	}
	Q.push(6);  a[6%n]=1;
	if(8%n==0)
	{
		cout<<8; return 0;
	}
	Q.push(8);  a[8%n]=1;
	while(Q.size()!=0)
	{
		ll u=Q.front();
		Q.pop();
		ll z=u*10+6;
		if(z%n==0)
		{
			cout<<z; return 0;
		}
		else if(a[z%n]==0)
		{
			Q.push(z); a[z%n]=1;
		}
		z=u*10+8;
		if(z%n==0)
		{
			cout<<z; return 0;
		}
		else if(a[z%n]==0)
		{
			Q.push(z); a[z%n]=1;
		}
		
	}
	cout<<0;
}


