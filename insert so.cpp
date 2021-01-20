#include<bits/stdc++.h>
using namespace std;
#define ll long long
string MAX="0", MIN ="999999999999999";
//ll min, max;
 string x, y;
void quaylui(int a, int b, string s)
{
	if(a+b==x.size()+y.size())
	 {
	 	MIN=min(MIN, s);
	 	MAX=max(MAX, s);
	 	}
   if(a<x.size())
	                 	quaylui(a+1, b, s+x[a]);
	if(b<y.size()) 	quaylui(a, b+1, s+y[b]);
	 	
	 	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 
  cin>>x>>y;
  quaylui(0, 0, "");
  cout<<MIN<<"\n"<<MAX;
  }
  

