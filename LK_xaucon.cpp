#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string, bool> Q;

void lietke(string s)
{
	if(Q[s] || s.size()==0)
	return;
	Q[s]=true;

	lietke(s.substr(0, s.size()-1));
	lietke(s.substr(1, s.size()));
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	cin>>s;
	lietke(s);
	for(auto z: Q)
	{
		cout<<z.first<<endl;
	}
}


