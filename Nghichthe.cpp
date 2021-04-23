#include<bits/stdc++.h>
using namespace std;
#define ll long long
//dem so nghich the
int b[10005], c[10005];
ll nghichthe(int *a, int L, int R)
{
	if(L>=R) return 0;
	int M=(L+R)/2;
	ll res=nghichthe(a, L, M)+nghichthe(a, M+1, R);
	for(int i=L;i<=M;i++)
	b[i]=a[i];
	for(int i=M+1;i<=R;i++)
	c[i]=a[i];
	b[M+1]=c[R+1]=INT_MAX;
	for(int i=L, j=M+1, k=L;k<=R;k++)
	if(b[i]<=c[j])  a[k]=b[i++];
	else
	{
		res+=M=i-1;
		a[k]=c[j++];
	}
	return res;

	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={4,7,2,8,2,3,5,7};
	int n=sizeof(a)/sizeof(int);
	cout<<nghichthe(a, 0, n-1);
	
}


