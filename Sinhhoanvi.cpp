#include<bits/stdc++.h>
using namespace std;
#define ll long long
// sinh hoanvi
// cho n  tim tat ca hoan vi 1..n
//bool check(int *x, int k, int t)
//{
//	for(int i=1;i<=k;i++)
//	if(x[i]==t) return false;
//	return true;
//}
//int d[100]={};

 map<int, bool> d;

void TRY(int *x, int k, int n)
{
	if(k==n)
	{
		cout<<"\n";
		for(int i=1;i<=k;i++)
		cout<<x[i]<<" ";
		return;
	}
	for(int t=1;t<=n;t++)
	if(d[t]==0)
	{
		d[t]=1;
		x[k+1]=t;
		TRY(x, k+1, n);
		d[t]=0;
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int x[100];
	TRY(x, 0, 4);
}


