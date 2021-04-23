#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<pair<int, int>> Q;
	int n, k, x;
	cin>>n>>k;
	for(int i=1;i<k;i++)
	{
		cin>>x;
		Q.push({x, i});
	}
	for(int i=k;i<=n;i++)
	{
		cin>>x;
		Q.push({x, i});
		while(i-Q.top().second>=k)
		Q.pop();
		cout<<Q.top().first<<" ";
	}
}


