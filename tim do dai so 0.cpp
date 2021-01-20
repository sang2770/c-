#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[n+1];
  for(int i=0;i<n;i++) cin>>a[i];
  int dem=0;
  int max=0;
  int i=0;
  while(i<=n)
  {
  	if(a[i]==0)
  	 dem++;
  	else
  	 {
  	 	if(max<dem)
  	 	max=dem;
  	 	dem=0;
  	 	}
  	 	i++;}
  	cout<<max;
  	}
  	 
  	 
  



