#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	cin>>s;
	map<int, int> M;
	int n, v=0, res=0;
	n=s.size();
	v=M[0]=s[0]=='X'?-1:1;
	for(int i=1;i<n;i++)
	{
		v+=s[i]=='X'?-1:1;
		int s=M[v];
		if(s==0)
		M[v]=i;
		else
		res=max(res, i-s);
	}
	cout<<res;
	
}


