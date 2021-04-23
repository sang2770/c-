#include<bits/stdc++.h>
using namespace std;
#define ll long long
void F(int n, ll &a, ll &b)
{
	if(n==0)
	{
		a=1;b=0;
	}
	else if(n==1) {
		a=b=1;
	}
	else
	{
		ll x, y;
		F(n/2, x, y);
		a=x*x+y*y;
		b=2*x*y-y*y;
		if(n%2) {
			a=a+b;
			b=a-b;
		}
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll a, b;
	for(int i=0;i<=90;i++)
	{
		F(i, a, b);
		cout<<a<<" ";
	}
	
}


