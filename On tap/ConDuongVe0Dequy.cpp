#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Check[1000]={};
int Zero(int n)
{
	if(Check[n])  return Check[n];
	if(n==0)
	 return 1;
	int k=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		k+=Zero((i-1)*(n/i+1));
	}
	return Check[n]=k;
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<Zero(12);
}


