//luong nuoc
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[10000], L[10005], R[10005];
	cin>>n;
	for(int i=0;i<=n;i++)
	cin>>a[i];
	L[1]=a[1];
	for(int i=2;i<=n;i++)
	L[i]=max(a[i], L[i-1]);
	R[1]=a[n];
	for(int i=n-1;i>=1;i--)
	R[i]=max(a[i], R[i+1]);
	long long res=0;
	for(int i=2;i<n;i++)
	{
		int k=min(L[i-1], R[i+1]);
		if(k>a[i])
		res+=k-a[i];
	}
	cout<<res;
	
}


