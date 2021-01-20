#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a=1000000007;
bool test(ll n)
{
	ll x=sqrt(n);
	if(x*x==n)
	 return true;
	 return false;
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
  	ll n;
  	cin>>n;
  	ll res=0;
  	int i=1, j=3;
  	while(i<=n)
  	{
  	 if(test(i) && i%3==1)
  	  res+=i;
  	  i+=j;
  }
  	cout<<res%a<<endl;
  	cout<<1%3;
  	
  }

    
	}
