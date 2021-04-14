#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n+2]={};
	long long res1=0, res2=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a, a+n);
	res1+=a[n-1];
	res2+=a[n-2];
	for(int i=n-3;i>=0;i--)
	if(res1<res2)
	res1+=a[i];
	else
	res2+=a[i];
	cout<<abs(res1-res2);
}


