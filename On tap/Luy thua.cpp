#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Pow(ll a, ll b)
{
	if(b==0) return a;
	return (b%2==0?1:a)*(pow(a*a, b/2));
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll a, b;
	cin>>a>>b;
	ll c=1e9+7;
	ll res=Pow(a, b)%c;
	printf("%ld", res);
	
}


