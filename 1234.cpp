#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	double hd, td;
}TD;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll  n;
  cin>>n;
  TD a[n+1];
  for(int i=1;i<=n;i++)
   cin>>a[i].hd>>a[i].td;
   double b[n+1];
   for(int i=1;i<n;i++)
    b[i]=sqrt(pow(a[i].hd-a[i+1].hd, 2)+pow(a[i].td-a[i+1].td, 2));
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	ll u, v;
    	cin>>u>>v;
    	double s=0;
    	for(int i=u;i<v;i++)
    	 s+=b[i];
    	cout<<setprecision(3)<<fixed<<s<<endl; 
}
}
    

