#include<bits/stdc++.h>
//#include <algorithm>
using namespace std;
#define ll long long
ll result(ll n, ll a, ll b, ll bcln)
{
	return (n/a+n/b-n/bcln);
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	ll m, n, a, b;
  	cin>>m>>n>>a>>b;
  	ll bcln=(a*b)/__gcd(a,b);
  	cout<<result(n, a, b, bcln)-result(m-1, a, b, bcln)<<endl;
  }
}
