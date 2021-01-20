#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	ll a, b;
  	cin>>a>>b;
  	int *dem=new int[b-a+1];
  	for(int i=a;i<=b;i++)
  	 for(int j=2;j<=i/2;j++)
  	  if(i%j==0)
  	   dem[j]++;
  	cout<<dem[1];

  	
 
  	}
  	}
  	 
  	

