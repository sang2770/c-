#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<int, int> a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int b;
		cin>>b;
		a[b]++;
		if(a[b]==1)
		cout<<b<<" ";
	}
}


