#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  ll max=0, dem=0, tg=0;
  ll a[n+1];
  for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	if(a[i]==0)
   	 dem++;
   	if(a[i]==1)
   	  {
   	  	tg++;
   	  	 if(dem>max)
   	  	  max=dem;
   	  	  dem=0;
		 }
}
if(max<dem)
max=dem;
   cout<<max+tg;

    
   	
   }

