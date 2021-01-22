#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n, m;
	cin>>n>>m;
	ll a[n+1]={};
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=2;i<=n;i++)
	a[i]+=a[i-1];
	while(m--)
	{
		int m1, m2;
		cin>>m1>>m2;
		cout<<a[m2]-a[m1-1]<<endl;
	}
}


