#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool Test(ll n)
{
	if(n==2) return true;
	if(n<2 || n%2==0) return false;
	for(int i=3; i*i<n;i+=2)
	if(n % i==0)
	 return false;
	return true;
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ll n;
	cin>>n;
	cout<<(Test(n)==true?"YES":"NO");
	
	
}


