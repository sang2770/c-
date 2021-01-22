#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	long long n, m, L, R, k;
	long long res = 0;
	cin>>n>>m>>k;
	long long a[m+5] = {}; 
	for(int i=0; i<n; i++)
	{
		cin>>L>>R;
		a[L]++;
		a[R]--;
	}
	for(int i=0; i<=m; i++)
	{
		if(L>0) a[i]+=a[i-1];
		res+=a[i]>=k;
	}
	cout<<m-res;
	
}


