#include<bits/stdc++.h>
using namespace std;
#define ll long long
void TRY(int *x, int k, int n)
{
	if(k==n)
	{
		cout<<"\n";
		for(int i=1;i<=k;i++)
		cout<<x[i];
		return ;
	}
//	x[k+1]=0; TRY(x, k+1, n);
//	x[k+1]=1; TRY(x, k+1, n);
	for(int t=0;t<2;t++)  x[k+1]=t, TRY(x, k+1, n);	
}
// quay lui
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int x[100];
	TRY(x, 0, 3);
	
}


