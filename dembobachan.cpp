#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll dem=0;
  ll a[n+1];
  for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-2;i++)
     for(int j=i+1;j<n-1;j++)
      for(int k=j+1;k<n;k++)
       if((a[i]+a[j]+a[k])%2==0)
        dem++;
cout<<dem;
}
    
    
    
     
     
  
