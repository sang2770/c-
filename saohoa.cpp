#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  ll a, b, c, d, dem=0;
  for(int j=0;j<t;j++)
  {
  	cin>>a>>b>>c>>d;
  	for(int i=81;i<=1000;i++)
  	 if(b+i*a==d+i*c)
  	  {
  	  	cout<<i<<endl;
  	  	dem++;
  	  	break;
  	  	}
  	if(dem==0)
  	 cout<<-1<<endl;
  	 }
  	 }
  	
  	
  	

