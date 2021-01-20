#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	long long res=0;
	long long M=a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(M<a[i])
		M=a[i];
		else
		res+=M-a[i];
		}
	cout<<res;
	}
	


