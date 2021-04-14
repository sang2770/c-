#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<int, int> A;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		A[a]++;
		}
	int res=n/2, dem=0;
	for(auto x:A)
	{
		if(x.second>n/2)
		{
			dem++;
			cout<<x.first;
			}
		}
	if(dem==0)
	cout<<"khong co phan tu ap dao";
	
}


