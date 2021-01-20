#include<bits/stdc++.h>
using namespace std;
#define ll long long
string MAX, MIN, x, y;
string s="";
ll gep(int a, int b, string s )
{
	if(a+b==s.size())
	{
		MAX=max(MAX, s);
		MIN=min(MIN, s);
		
	}

	if(a<x.size())  gep(a+1, b, s+x[a]);
	if(b<y.size())   gep(a,b+1,s+y[b] );
}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>x>>y;
  MAX="0", MIN="9999999999999";
  gep(0, 0, s);
  cout<<MAX<<" "<<MIN	;
}
  
  

