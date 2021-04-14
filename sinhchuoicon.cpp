#include<bits/stdc++.h>
using namespace std;
map<string, int> M;
bool ss(string a, string b)
{
	return a.size()>b.size();
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	vector<string> res;
	string n;
	fflush(stdin);
	getline(cin, n);
	for(int i=0;i<n.size();i++)
	{
		string a="";
		for(int j=i;j<n.size();j++)
		{
			a+=n[j];
			M[a]++;
			if(M[a]==1)
			res.push_back(a);
		}
	}
	sort(res.begin(), res.end(),ss);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<endl;
	
}


