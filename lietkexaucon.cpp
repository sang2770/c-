#include<bits/stdc++.h>
using namespace std;
map<string, int> M;
vector<string> res;
bool ss(string a, string b)
{ 	return a.size()>b.size();}
void locxau(string s)
{
	if(M[s]==1)
	return;
	else
	{
		M[s]=1;
		res.push_back(s);
		if(s.size()!=1)
		{
			locxau(s.substr(0, s.size()-1));
			locxau(s.substr(1, s.size()));
		}
	}
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	cin>>s;
	locxau(s);
	int dem=0;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i];
			}
	cout<<res.size();
}


