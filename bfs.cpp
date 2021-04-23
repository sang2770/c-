#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	bool d[n+1]={};
	queue<int> S;
	S.push(n);
	d[n]=1;
	while(S.size())
	{
		int u=S.front();
		S.pop();
		for(int a=1;a*a<u;a++)
		if(u%a==0)
		{
			int v=(a+1)*(u/a-1);
			if(d[v]==0)
			{
				d[v]=1;
				S.push(v);
				}
			}
			}
		for(int i=0;i<=n;i++)
			if(d[i]) cout<<i<<" ";
}


