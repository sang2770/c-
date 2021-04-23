#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dol()
{
	int n,z;
	cin>>n;
	queue<ll> Q;
	bool d[n+5]={};// mang lay du
	if(6%n==0) return 6;
	if(8%n==0) return 8;
	Q.push(6);
	Q.push(8);
	d[6%n]=d[8%n]=1;  
	while(Q.size())
	{
		ll u=Q.front();
		Q.pop();
		z=u*10+6; if(z%n==0) return z;
		if(d[z%n]==0) {
			d[z%n]=1;
			Q.push(z);
		}
		z=u*10+8; if(z%n==0) return z;
		if(d[z%n]==0) {
			d[z%n]=1;
			Q.push(z);
		}
	}
	return 0;
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<dol();
	
}


