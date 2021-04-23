#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	vector<pair<int, int>> V(n);
	for(int i=0;i<n;i++)
	{
		cin>>V[i].first;V[i].second=i+1;
	}
	sort(V.begin(), V.end());
	for(auto z:V)
	{
		cout<<z.second<<" ";
	}
}


