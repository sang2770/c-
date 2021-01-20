#include<bits/stdc++.h>
using namespace std;
#define ll long long // ki hieu kieu long long
ll n;
ll  res=1e18;

void test(ll a)
{
	if(a%n==0 && a!=0)
	 res=min(a, res);
	else if(a<= 1e18)
	 {
	 test(a*10+6);
	 test(a*10+8);}
	 }
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  
  cin>>n;
  test(0);
  if(res == 1e18)
   cout<<0;
   else
    cout<<res;
    }
  
  


