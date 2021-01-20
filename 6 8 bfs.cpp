#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int A[2]={6, 8};
ll BFS()
{
	queue<ll>save;
	save.push(0);
	while(save.size()!=0)
	{
		ll x=save.front();
		save.pop();
		if(x%n==0 && x!=0)
		 return x;
		for(int i=0;i<2;i++)
		{
			if(x*10+A[i]<=1e18)
			 save.push(x*10+A[i]);
			 }
	}
	if(save.size()==0)
	 return 0;
	 }
			 
		 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n;
  cout<<BFS();
  }
  



