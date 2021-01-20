#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int T, D;
	cin>>T>>D;
	int n;
	cin>>n;
	int a[n+3];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	 int tg=T;
	int res=0;
	vector<int> xe;
	sort(a, a+n);
	for(int i=0;i<=n;i++)
	{
		if(a[i]<=tg)
		res++;
		else
		{
			 xe.push_back(res);
			 res=0;
			 tg+=D;
			 if(a[i]<=tg)
			  res++;}}
	int max=xe[0];
	for(int i=1;i<xe.size();i++)
	 if(max<xe[i])
	  max=xe[i];
	  int i;
	for(i=0;i<xe.size();i++)
	 if(max==xe[i])
	  break;
	cout<<i+1;
	}
		



