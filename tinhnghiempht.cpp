#include<bits/stdc++.h>
using namespace std;
#define ll long long

// phuong trinh nghiem nguyen
void TRY(int *x, int k, int T, int n, int M)   // tong thuc te M, tong mong muon T
{
	if(k==n-1)
	{
		int static d=0;
		cout<<"\n"<<d++<<":";
		for(int i=1;i<=k;i++)
			cout<<x[i]<<"+";
		cout<<M-T<<"="<<M;
		}
	else
	{
		for(x[k+1]=0;x[k+1]+T<=M;x[k+1]++)
		TRY(x, k+1, T+x[k+1], n ,M);
		}	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int x[100];
	TRY(x, 0, 0, 3, 10);
	
}


