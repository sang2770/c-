#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	list<int> List;
	for(int i=1;i<=n;i++)
	{
		List.push_back(i);
	}
	while(List.size()>1)
	{
		for(int i=1;i<k;i++)
		{
			List.push_back(List.front());
			List.pop_front();
		}
		List.pop_front();
		
	}
	cout<<List.front();
	
}


