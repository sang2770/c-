#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<int, int>, ll> D;
ll C(int n, int k)
{
	if(D.find({n, k})!=D.end())
	return D[{n, k}];
	return D[{n, k}]= k==0||k==n?1:C(n-1, k-1)+C(n-1, k);
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<C(i, j)<<" ";
		}
		cout<<endl;
	}
}


