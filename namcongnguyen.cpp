#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll m;
		cin>>m;
		ll res=2015-m;
		if(res==0)
		cout<<1<<" B.C."<<endl;
		else if(res<0)
		cout<<res*-1+1<<" B.C."<<endl;
		else
		cout<<res<<" A.D."<<endl;
	}
}


