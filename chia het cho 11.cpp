#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		}
	int dem=0;
	for(int i=1;i<=n-1;i++)
		for(int j=i+1;j<=n;j++)
			if((a[i]+a[j])%11==0)
				dem++;
	cout<<dem;
	
	
}


