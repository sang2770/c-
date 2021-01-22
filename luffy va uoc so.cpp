#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Sum(int n)
{
	int res=0;
	for(int i=1;i<=n;i+=2)
	if(n%i==0)
	res+=i;
	return res;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	int uoc[100000];
	uoc[1]=0;
	for(int i=2;i<=100000;i++)
	{
		uoc[i]=uoc[i-1]+Sum(i);
	}
	for(int i=0;i<n;i++)
	{
		int c, d;
		cin>>c>>d;
		cout<<uoc[d]-uoc[c-1]<<endl;
	}
	
	
}


