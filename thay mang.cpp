#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll a[10];
  for(int i=0;i<=9;i++)
   {
   	cin>>a[i];
   	if(a[i]<=0)
   	a[i]=1;
   	cout<<"X["<<i<<"]"<<" = "<<a[i]<<endl;
   }
}
   

