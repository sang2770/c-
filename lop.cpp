#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	map<int, int> A;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		A[a]++;
	}
	int max=0, max1=0;
	for(auto z:A)
	if(max<=z.second)
	{
		max=z.second;
		if(max1<z.first)
		max1=z.first;
		}
	cout<<max1<<endl;
	
}


