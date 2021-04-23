#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, x, t=0,res=0;
	cin>>n;
	map<int, int> M;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(M[x]>t) t=M[x];
		res=max(res, i-t);
		M[x]=i;
		
	}
	cout<<res;
	for(auto z: M)
	cout<<z.second<<" ";
}


