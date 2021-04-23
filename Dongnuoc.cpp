#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> tt;
struct Water{
	map<tt, bool> M;
	vector<tt> X;
	int n, m, z;
	int dem=0;
	void sol()
	{
		X.push_back({0,0});
		cin>>n>>m>>z;
		M[{0, 0}]=true;
		if(z%__gcd(n,m )  || z>max(n, m)){
			cout<<"Khong Dong duoc"; return;
		}
		TRY(1);  cout<<"\n"<<"So cach dong duoc:"<<dem<<endl;
	}
	void TRY(int k)
	{
		int x=X[k-1].first, y=X[k-1].second, t=x+y;
		if(x==z || y==z)
		{
			cout<<"\n"<<++dem<<":";
			for(auto u:X)
			cout<<"("<<u.first<<";"<<u.second<<")";
			return;
		}
		tt Next[]={{0, y}, {x, 0}, {n, y}, {x, m}, {max(0, t-m), min(m, t)}, {min(n, t), max(0, t-n)}};
		for(auto u:Next)
		{
			if(!M[u])
			{
				M[u]=1;
				X.push_back(u);
				TRY(k+1);
				M[u]=0;
				X.pop_back();
				
			}
		}
	}
};


int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Water W;
	W.sol();
}


