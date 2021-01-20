#include<bits/stdc++.h>
using namespace std;
int C(int k, int n)
{
	if(k==0 || k==n) return 1;
	if(k==1) return n;
	return C(k-1, n-1)+C(k, n-1);
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<=n;i++)
   {
   for(int j=0;j<=i;j++)
     cout<<C(j, i)<<" ";
    cout<<"\n";
}
}
    
  
  

