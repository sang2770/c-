#include<bits/stdc++.h>
using namespace std;
#define ll long long
// bit mat bat de

int main()
{
//	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	list<int> L;
	for(int i=1;i<=n;i++)
	L.push_back(i);
	while(L.size()>1)
	{
		for(int i=1;i<k;i++)
		{
			L.push_back(L.front());
			L.pop_front();
		}
		L.pop_front();
	}
		
	cout<<L.front();
}


