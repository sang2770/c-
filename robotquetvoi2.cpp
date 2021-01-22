#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n, m;
	cin>>n>>m;
	ll res=0;
	ll a[m+1]={};
	while(n--)
	{
		ll b, c;
		cin>>b>>c;
		res+=c-b;
		for(int i=b;i<c;i++)
		{
			a[i]++;
			if(a[i]>=2)
			res--;
		}
		
	}
	cout<<m-res;
}


