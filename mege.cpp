#include<bits/stdc++.h>
using namespace std;
#define ll long long
int b[1000], c[1000];
void mege(int *a, int L, int R)
{
	if(L>=R)
	return;
	int M=(L+R)/2;
	mege(a, L, M);
	mege(a, M+1, R);
	for(int i=L;i<=M;i++) b[i]=a[i];
	for(int i=M+1;i<=R;i++)  c[i]=a[i];
	b[M+1]=c[R+1]=INT_MAX;
	for(int i=L, j=M+1, k=L;k<=R;k++)
	a[k]=b[i]<c[j]?b[i++]:c[j++];
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={3,7,8,2,5,8,9,3,10};
	int n=sizeof(a)/sizeof(int);
	mege(a, 0, n-1);
	for(int x:a)
	cout<<x<<" ";
}


