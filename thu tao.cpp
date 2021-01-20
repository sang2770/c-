#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int a[n+3];
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	int res=0;
		
	for(int i=1;i<=n+1;i++)
	{
	int count=0;
	if(a[i-1]>0 and i>1)
	{
		res = res + min(a[i - 1],m);
	    count = m - min(a[i - 1],m);
		}
		
	else if(a[i]>m)
	 {
	 	res+=m;
	 	a[i]=a[i]-m;
	 	}
	 else 
	 {
	 res+=a[i];
	 a[i]=0;
	 }
	  if(count !=0)
	  {
	  	res+=min(count, a[i]);
	   a[i]=a[i]-min(count, a[i]);
	   }
	   }
	   cout<<res;
	   }
	 	
	 
	 
	   
	
	 

