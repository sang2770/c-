#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a=1000000007;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
   for(int i=0;i<t;i++)
    {
    	ll  n;
    	cin>>n;
    	n=sqrt(n);
    	ll x=n/3;
        ll res=((n*(n+1)*(2*n+1)/6)-9*(x*(x+1)*(2*x+1)/6));
    	cout<<res%a<<endl;
    	}
    	
    	
     
  
}
  

