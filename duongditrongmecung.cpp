#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct mecung{
	int n, m, a[100][100];
	int hh[4]={0, 0, -1, 1};
	int hc[4]={-1, 1, 0, 0};
	void nhap(string fn="mc.txt"){
//		fstream fin(fn, ios::in);  //Mo file ghi
//		fstream fin(fn, ios::out);  //Mo file doc
//		fin.close();  //dong
		ifstream fin(fn);
		fin>>n>>m;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			fin>>a[i][j];
		fin.close();
	
	}
	void xuat()
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
		}
			
	}
	void sol()
	{
		int sx, sy, fx, fy;
		for(int i=0;i<=n+1;i++)   a[i][0]=a[i][m+1]=1;
		for(int i=0;i<=m+1;i++)   a[0][j]=a[n+1][j]=1;
		cin>>sx>>sy>>fx>>fy;       //Nhap xuat phat va ket thuc
		cout<<(dfs(sx, sy, fx, fy)? "Di duoc":"Khong di duoc");
	}
	void dfs(int u, int v, int z, int t)
	{
		if(u==z && v==t) return true;
		a[u][v]=1;
		for(int h=0;h<4;h++)
		if(a[u+hh[h]][v+hc[h]]==0)
		{
			if(dfs(u+hh[h], v+hc[h], z, t))
			return true;
		}
		return false;
		
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	mecung M;
	M.nhap();
	M.xuat();
	M.sol();
		
}


