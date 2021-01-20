#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n, k;
  cin>>n>>k;
  ll a[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n);
   ll dem=1;
   for(int i=1;i<n;i++)
   {
   	if(a[i]-a[i-1]>k)
   	dem++;
   	}
   	cout<<dem;
   	}
   	 
   
    

