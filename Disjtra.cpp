#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ss{
	int operator() (pair<int, int> u, pair<int, int> v)
	{
			return u.second>v.second;
	}
};
struct Graph{
	int n, m, q;
	vector<pair<int, int>> A[205];
	void sol()
	{
		cin>>n>>m>>q;
		for(int i=1;i<=m;i++)
		{
			int u, v, w;
			cin>>u>>v>>w;
			A[u].push_back(make_pair(v, w));
			A[v].push_back({make_pair(u, w)});
		}
		while(q--)
		{
			int s, f;
			cin>>s>>f;
			cout<<Dijktra(s, f)<<endl;
		}
	}
	int Dijktra(int s, int f)
	{
		priority_queue<pair<int, int>, vector<pair<int, int>>, ss> Q;
		int L[205];
		fill(L, L+n+1,INT_MAX);
		Q.push({s, 0});
		L[s]=0;
		while(Q.size())
		{
			pair<int, int> u=Q.top();
			Q.pop();
			if(u.first==f)
			return u.second;
			for(auto v:A[u.first])
			{
				if(L[v.first]>u.second+v.second)
				{
					L[v.first]=u.second+v.second;
					Q.push({v.first, L[v.first]});
				}
			}
		}
		return -1;
	}
};

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Graph G;
	G.sol();
}


