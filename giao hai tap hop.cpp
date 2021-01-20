#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n,m;
  cin>>n;
  ll a[n+1];
  map<ll, ll>save;
  vector<int>res;
  for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	save[a[i]]++;
   	}
   	cin>>m;
   	ll b[m+1];
   	for(int i=0;i<m;i++)
   	 {
   	 	cin>>b[i];
   	 	if(save[b[i]]!=0)
   	 	 res.push_back(b[i]);
   	 	 }
    sort(res.begin(), res.end());
   	 for(int i=0;i<res.size();i++)
   	  if(res[i]!=res[i+1])
   	  cout<<res[i]<<" ";
   	  }
   	 	
   	 	
   	 	
   	   
   	

