#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n,t;
	cin>>t;
	string ten[]={"dangdungcntt", "tienquanutc", "quang123","maianh", "nguyenminhduc2820"};
	list<pair<int, string>> L;
	while(t--)
	{
	cin>>n;
	L.clear();
	for(auto x:ten) L.push_back({1, x});
	while(n>L.front().first)
	{
		n-=L.front().first;
		L.push_back(L.front());
		L.back().first*=2;
		L.pop_front();
	}
	cout<<L.front().second<<endl;
	}
}
	


