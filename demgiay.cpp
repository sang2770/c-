#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	map<string, int>L;
	map<string, int>R;
	int dem;
	vector<string> a;
	map<string, int> b;
	for(int i=0;i<n;i++)
	{
		string res, res1="";
		cin>>res;
		res1+=res[1];
		res1+=res[2];
		b[res1]++;
		if(res[0]=='L')
		L[res1]++;
		else
		R[res1]++;
		if(b[res1]==1)
		a.push_back(res1);
		}
	for(int i=0;i<a.size();i++)
		if(L[a[i]]>=1 && R[a[i]]>=1)
		dem+=min(L[a[i]], R[a[i]]);
	cout<<dem;
//	
//	for(int i=0;i<a.size();i++)
//	cout<<a[i]<<" "<<L[a[i]]<<"+"<<R[a[i]]<<endl;
	
	
	
}


