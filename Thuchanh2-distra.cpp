#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct ss{
	int operator()(pair<int, int> a, pair<int, int> b)
	{
		return a.second>b.second;
	}

};
struct Praph
{
	int n, m, q;
	vector<pair<int, int>> A[205];
	void nhap()
	{
	
	cin>>n>>m>>q;
	for(int i=0;i<m;i++)
	{
		int u, v, w;
		cin>>u>>v>>w;
		A[u].push_back({v, w});
		A[v].push_back({u, w});
	}
	while(q--)
	{
		int u, v;
		cin>>u>>v;
		cout<<Distra(u, v)<<endl;
	}
	}
	int Distra(int s, int f)
	{
	priority_queue<pair<int, int>, vector<pair<int, int>>, ss> Q;
	int L[250];
	fill(L, L+n+1, INT_MAX);
	L[s]=0;
	Q.push({s, 0});
	while(!Q.empty())
	{
		pair<int, int> u=Q.top();
		Q.pop();
		if(u.first==f)
		return u.second;
		for(auto x: A[u.first])
		{
			if(L[x.first]>u.second+x.second)
			{
				L[x.first]=u.second+x.second;
				Q.push({x.first, L[x.first]});
			}
		}
	}
	return -1;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Praph a;
	a.nhap();
}


