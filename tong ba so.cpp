#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, s;
  cin>>n>>s;
 int z,dem=0;
  for(int i=0;i<=n;i++)
   for(int j=0;j<=n;j++)
    {
    	z=s-i-j;
    	if(z>=0 && z<=n)
    	 dem++;
    	 }
    cout<<dem;
    }
    
    	
    
  



