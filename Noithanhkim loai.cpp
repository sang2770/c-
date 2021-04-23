#include<bits/stdc++.h>
using namespace std;
#define ll long long
// noi thanh kim loai
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<int, vector<int>, greater<int>> Q;
	int n, x, res=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		Q.push(x);
	}
	while(Q.size()>1)
	{
		int u=Q.top(); Q.pop();
		int z=Q.top();Q.pop();
		res+=u+z;
		Q.push(u+z);
	}
	cout<<res;
}


