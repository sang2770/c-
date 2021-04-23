#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll subsum(int *a, int L, int R)
{
	if(L==R)
	return a[L];
	int M=(L+R)/2;   //tim vi tri giua
	ll res=max(subsum(a, L, M), subsum(a, M+1, R));   // tim day con lon nhat o hai nua
	// phan giao nhau giua hai nua
	ll t=a[M], ML=a[M];
	for(int i=M-1;i>=L;i--)
	{
		t+=a[i];
		ML=max(ML, t);
	}
	ll s=a[M+1], MR=a[M+1];
	for(int i=M+2;i<=R;i++)
	{
		s+=a[i];
		MR=max(MR, s);
	}
	return max(res, ML+MR);
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={-4, -7, 5, -3, -1, 6, 2, -4, -5, 1, -7, 2};
	int n=sizeof(a)/sizeof(int);
	cout<<subsum(a, 0, n-1);
	
	
}


