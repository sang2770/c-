#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+1], L[n+1], R[n+1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	L[1]=a[1]; R[1]=a[n-1];
	for(int i=2;i<n;i++)
	L[i]=max(a[i], L[i-1]);
	for(int i=n-2;i>=1;i--)
	R[i]=max(R[i+1], a[i]);
	long long res=0;
	for(int i=2;i<n-1;i++)
	{
		long long k=min(L[i-1], R[i+1]);
		if(k>a[i])
		res+=k-a[i];
		}
	cout<<res;
		
		
	
}


