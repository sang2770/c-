#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>save;
int vt;
ll search(ll *a,ll l, ll r, ll n )
{
	if(r>=l)
	{
	
	ll mid=l+(r-l)/2;
	if(a[mid]==n)
	{vt=mid;
	return search(a,0, mid-1, n);}
	if(a[mid]<n) return search(a,mid+1, r, n);
	 	return search(a, l, mid-1, n);
	 }
	 return -1;
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n, m;
  cin>>n>>m;
  ll a[m+1];
  for(int i=0;i<m;i++)
   cin>>a[i];
   sort(a, a+m);
   ll j=search(a, 0, m-1,n);
   cout<<vt;
//   ll vt1=search(a,0, j, n);
//   ll vt2=search(a, j, m-1, n);
//   if(vt1!=-1)
//    for(int i=vt1;i<=j;i++)
//     cout<<i<<" ";
//   else
//   {
//   	   if(vt2!=-1)
//   	   for(int i=j;i<=vt2;i++)
//       cout<<i<<" ";
//       else
//       return 0;
//   	    
//   }
}
     
     
 
   
   
   
 


