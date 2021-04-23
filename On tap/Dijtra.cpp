#include<bits/stdc++.h>
using namespace std;
#define ll long long
// dinh nghia ham so sanh
struct ss{
	int operator () (pair<int, int> a, pair<int, int> b){
		return a.second>b.second;
	}
};
int result[200];
// Ve do thi
struct Graph
{
	int n, m, q;
	vector<pair<int, int>> A[205];
	void Input()
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
			int s, f;
			cin>>s>>f;
			cout<<Short(s, f)<<endl;
			
			while(result[f]!=0)
			{
				cout<<f<<"<-";
				f=result[f];
			}
			cout<<s;
			cout<<endl;
		}
	}
	int Short(int s, int f)
	{
		priority_queue<pair<int, int>, vector<pair<int, int>>, ss> Q;  // so sanh
		int L[n+1];
		fill(L, L+n+1, INT_MAX);	
		Q.push({s, 0 }); // voi s la dinh 
		L[s]=0;
		result[s]=0;
		while(Q.size()!=0)
		{
			pair<int, int> u=Q.top();
			Q.pop();
			if(u.first==f)
			return u.second;
			for(auto v: A[u.first])
			{
				if(L[v.first]> u.second+v.second)
				{
					L[v.first]=u.second+v.second;
					Q.push({v.first, L[v.first]});
					result[v.first]=u.first;
				}
			}
		}
		return -1;
	}
};

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Graph a;
	a.Input();
	

}


