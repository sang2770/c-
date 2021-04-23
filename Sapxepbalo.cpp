#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct balo
{
	
	ll n, M, a[100], b[100];
	ll res=0;
	string pa="";
	void nhap()
	{
		cin>>n>>M;
		for(ll i=1;i<=n;i++)
			cin>>a[i]>>b[i];
		TRY(0,  0, 0);
		cout<<res;
	}
	void TRY(ll k, ll A, ll B, string x)
	{
		if(k>n)
		{
			if(res<B)
			{
				res=max(res, B);
				pa=a;
			}
			
			return;
		}
		TRY(k+1, A, B, x+"0");// khong lay
		if(A+a[k]<=M)  TRY(k+1, A+a[k], B+b[k], x+"1");  // co lay
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	freopen("Balo.txt", "r", stdin);
	balo B;
	B.nhap();
	
}


