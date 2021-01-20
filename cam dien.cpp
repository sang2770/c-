#include<bits/stdc++.h>
using namespace std;
bool ss(int a, int b)
{
	 return a>b;
	 }
int main()
{
	int n, m;
	cin>>n>>m;
	int a[n+3];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	sort(a, a+n, ss);
	int res=0;
	int sochocam=1;
	int i=0;
	while(sochocam<m &&i<n)
	
	 {
	 res++;
	 sochocam+=a[i]-1;
	 i++;
	 }
	if(sochocam<m)
	 cout<<-1;
	else
	cout<<res;
	}
	  
	


