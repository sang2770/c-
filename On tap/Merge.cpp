#include<bits/stdc++.h>
using namespace std;
#define ll long long
int b[100+1], c[100+1];
void Merge(int *a, int L, int R)
{
	if(L>=R) return;
	int M=(L+R)/2;
	Merge(a, L, M);
	Merge(a, M+1, R);
	for(int i=L;i<=M;i++)  b[i]=a[i];
	for(int i=M+1;i<=R;i++)  c[i]=a[i];
	b[M+1]=c[R+1]=INT_MAX;    // truong hop do dai hai mang b, c k bang nhau
	for(int i=L, j=M+1, k=L;k<=R;k++)
		a[k]=b[i]<c[j]?b[i++]:c[j++];
	
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={1,2,4,7,2,3,5,7};
	int n=sizeof(a)/sizeof(int);
	Merge(a, 0, n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<n;
}


