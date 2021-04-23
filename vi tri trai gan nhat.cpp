#include<bits/stdc++.h>
using namespace std;
#define ll long long
// vi tri cao hon trai gan nhat
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	vector<int> V(1,0);
	int n;
	cin>>n;
	int a[n+5]={INT_MAX};
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		while(a[i]>a[V.back()]) V.pop_back();
		cout<<V.back()<<" ";
		V.push_back(i);
	}
	cout<<"\n";
	for(auto i:V)
	cout<<i<<" ";
}


