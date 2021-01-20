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
   ll max=a[0];
   int j=0;
   while(j<n)
   {
   	ll res=0;
   	res+=a[j];
   	if(max<res)
   	 max=res;
	if(j==n-1)
	break;
	
   	for(int i=j+1;i<n;i++)
   	 { res+=a[i];
   	 	if(max<res)
   	 	max=res;
		}
   	 j++;
   }
   cout<<max;
}
   

