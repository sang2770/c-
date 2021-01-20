#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll a[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n);
   ll min=0;
   for(int i=0;i<n;i++)
   min+=abs(a[0]-a[i]);
   for(int i=a[1]; i<=a[n-1];i++)
   {
   	ll res=0;
   	for(int j=0;j<n;j++)
   	 res+=abs(i-a[i]);
   	if(min>res)
   	min=res;
   }
   cout<<min;
   	
   }

