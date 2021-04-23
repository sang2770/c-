#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct graph{
	int n, A[100][100], x[100]={0, 1}, d[100]={0,1}, r=INT_MAX, res=INT_MAX;
	void nhap(string fname)
	{
		fstream fin; fin.open(fname, ios::in);
		fin>>n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				fin>>A[i][j];
				if(A[i][j]>0 && A[i][j]<r)
				r=A[i][j];
			}
		fin.close();
	}
	void TRY(int k, int T)
	{
		if(k>n)
		{
			res=min(res, T+A[x[k-1]][1]);
			return;
		}
		for(int t=2;t<=n;t++)
		if(not d[t] && T+A[x[k-1]][t]+r*(n-(k-1))<res)
		{
			d[t]=1;
			x[k]=t;
			TRY(k+1, T+A[x[k-1]][t]);
			d[t]=0;
		}
	}
	void sol()
	{
		nhap("Dulich.txt");
		TRY(2, 0);	
		cout<<"Lo trinh min:"<<res;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	graph x;
	x.sol();
}


