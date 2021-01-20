#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	string a;
  	int res;
  	cin>>a;
  	if(a[0]==a[2])
  	res=(a[0]-48)*(a[0]-48);
  	else if(a[1]<='Z'&& a[1]>='A')
  	res=a[2]-a[0];
  	else if(a[1]<='z'&& a[1]>='a')
  	res=a[2]+a[0]-48-48;
  	cout<<res<<endl;
  }
}
  
  

