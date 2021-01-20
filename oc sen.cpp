#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll res=0, dem=0;
  ll a, b, h;
  cin>>a>>b>>h;
    if(h == a){
       cout<<1;
    }
    else{
        if((h-b)%(a-b)==0)
            cout<<(h-b)/(a-b);
        else
            cout<<(h-b)/(a-b)+1;
    }}
  	

