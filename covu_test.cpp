#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string x;
	cin>>x;
	int t=0, res=0;
	for(int i=0;i<x.length();i++)
	{
		t+=x[i]=='X'?-1:1;
		if(t==0)
		{
			res=max(res, i-t+1);
			t=i+1;
		}
		
	}
	cout<<res;
	
}


