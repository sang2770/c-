#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll max=0, vt=1;
  for(int i=1;i<=100;i++)
  {
  	ll a;
  	cin>>a;
  	if(max<a)
  	{max=a;
  	vt=i;
	  }
  	
  }
  cout<<max<<"\n"<<vt;
}
