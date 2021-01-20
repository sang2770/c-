#include<bits/stdc++.h>
using namespace std;
void sang(int n, vector<int> &P)
{
	vector<bool> s(n+1, true);
	for(int i=2;i<=n;i++)
	{
		if(s[i]==true)
		{
		P.push_back(i);
//		cout<<i<<" ";
		for(int j=2*i; j<=n;j+=i)
		{
			s[j]=false;
		}
	    }
	}	
}
void sang2(int n)
{
	int res=0;
	if(n>=2)
	{
	cout<<2<<" ";
	for(int i=3;i<=n;i+=2)
	cout<<i<<" ";}
		
}
int main()
{
	int n=7;
	vector<int> p;
	sang(n, p);
	sang2(n);
	for(int x=0;x<p.size();x++)
	cout<<p[x]<<" ";
	for(auto x:p)
	cout<<x<<" ";
}


