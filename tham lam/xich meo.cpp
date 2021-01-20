#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);ios::sync_with_stdio(0);cout.tie(0);
	 int n;
	 cin>>n;
	 int a[n];
	 int matxich=0;
	 for(int i=0;i<n;i++)
	 cin>>a[i];
	 sort(a, a+n);
	 for(int i=0;i<n;i++)
	  if(matxich+a[i]>=n-i-1)
	  {
	  	cout<<n-1-i;
	  	return 0;
	  }
	  else
	   matxich+=a[i];
	   
	   
    }
    
