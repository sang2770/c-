//bai toan robot quet voi
 /*cho buc tuong m met
 robot quet n lan tu Li den Ri
 neu cho quet>=k -> dat yeu cau
 tim so m dat yeu cau*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, L, R, k;
	cin>>n>>m>>k;
	//cach 1
	int a[m+1]={};
	while(n--)
	{
		cin>>L>>R;
		for(int i=L;i<R;i++)
		a[i]++;
	}
	int res=0;
	for(int i=0;i<=m;i++)
	if(a[i]>=k)
	res+=a[i];
	cout<<res;
	
	//cach 2
/*	while(n--)
	{
		cin>>L>>R;
		a[L]++;
		a[R]--;
		
	}
	int res=0;
	for(int i=0;i<=m;i++)
	{
		if(i>0)
		a[i]+=a[i-1];
		res+=a[i]>=k;
	}
	cout<<res;*/
	
}


