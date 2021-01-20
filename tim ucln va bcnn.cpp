#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  
  while(true)
  {
  	ll a, b;
	cin>>a>>b;
  	if(a!=0 || b!=0)
    {
    ll tg=__gcd(a, b);
  	cout<<tg<<" "<<a*b/tg<<endl;}
  	else 
	  return 0;
  	}
  	}
  	
  	

