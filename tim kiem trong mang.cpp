#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>save;
void search(ll *a,ll l, ll r, ll n )
{
	ll mid=(r+l)/2;
	if(a[mid]==n)
	save.push_back(mid);
	else
	 {
	 	if(a[mid]>n) return search(a,mid+1, r, n);
	 	return search(a, r, mid-1, n);
	 }}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n, m;
  cin>>n>>m;
  ll a[n+1];
  for(int i=0;i<m;i++)
   cin>>a[i];
   sort(a, a+m);
   search(a, 0, n-1,n);
   for(int i=0;i<save.size();i++)
    cout<<save[i]<<" ";
}
   

