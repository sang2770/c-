#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a=1e9+7;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	ll n, res=0;
  	cin>>n;
  	for(ll j=1; j*j<=n;j++)
  	 if((j*j)%3==1)
  	  {res+=j*j;
  	  res%=a;
  }
  	cout<<res<<endl;
  }
  }

