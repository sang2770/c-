#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[10], tg=0;
ll dequy(ll p, ll dem, ll &tg)
{
	if(p<=n)
	 { 
	  if(p==n)
	   {
	   if(dem>tg)
	    {
		tg=dem;
		dem=0;
		}}
	{
		dequy(p+a[0], dem+1, tg);
		dequy(p+a[1], dem+1, tg);
		dequy(p+a[2], dem+1, tg);
	}}
	return 0;
}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n;
  for(int i=0;i<3;i++)
     cin>>a[i];
     sort(a, a+3);
  dequy(0, 0, tg);
  cout<<tg; 
}
    
  
   
  
  
  

