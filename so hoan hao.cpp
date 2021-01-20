#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool test(ll n)
{
	ll res=0;
	for(int i=1;i<=n/2;i++)
	if(n%i==0)
	 res+=i;
if(res==n)
 return true;
 return false;
 }
	 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	ll n;
  	cin>>n;
  	if(n%2!=0)
  	cout<<n<<" nao eh perfeito "<<endl;
  	else if(test(n))
  	cout<<n<<" eh perfeito "<<endl;
  	else
  	cout<<n<<" nao eh perfeito "<<endl;
  	}
  	}
  	
  

