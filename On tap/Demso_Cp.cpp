#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool Test(ll n)
{
	if(n<0 || n%4>1 || n%3>1 || n%10==2|| n%10 ==3||n%10 ==7||n%10 ==8)
	return false;
	int L=0, R=n;
	while(L<=R)
	{
		ll a=(L+R)/2;
		if(a*a==n)
		return true;
		else
		{
			a*a<n? L=a+1:R=a-1;
		}
	}
	return false;
}
//bool Test(ll n)
//{
//	ll a=sqrt(n);
//	if(a*a==n)
//	return true;
//	return false;
//}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n;
	cin>>n;
	while(n--)
	{
		ll a, b;
		cin>>a>>b;
		ll dem=0;
		for(ll i=a;i<=b;i++)
		{
			if(Test(i))  dem++;

		}
		cout<<dem<<endl;
	}
	
}


