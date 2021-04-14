#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, m;
	cin>>n>>m;
	map<int, int>A;
	map<int, int>B;
	for(int i=0;i<n;i++)
	{
		int tg;
		cin>>tg;
		A[tg]++;
	}
	for(int i=0;i<m;i++)
	{
		int tg;
		cin>>tg;
		B[tg]++;
	}
	long long  dem=0;
	for(auto x:A)
	{
		for(auto y:B)
		if(x.first==y.first)
		{
			dem+=min(x.second, y.second);
		}
		
	}
	cout<<dem;
}


