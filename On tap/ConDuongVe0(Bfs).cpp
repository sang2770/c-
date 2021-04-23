#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue<int>res;
		res.push(n);
		ll d[n+1]={};
		d[n]=1;
		ll dem=0;
		while(res.size()>0)
		{
			ll t=res.front();
			res.pop();
			for(ll i=1;i*i<=t;i++)
			{
				if(t%i==0)
				{
					ll m=(i-1)*(t/i+1);
					if(m==0)
					{
						dem++;
					}
//					cout<<m<<endl;
					res.push(m);				
				}
				
			}
			
		}
		cout<<dem%(1000000007)<<endl;
		
		
		
	}
}


