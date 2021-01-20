#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b, c;
  cin>>a>>b>>c;
  if(a>b&& b<=c || a<b&& b<c&& c-b>=b-a|| a>b&&b>c && b-c<a-b|| a==b && b<c)
   cout<<":)";
   else
   cout<<":(";
   }
  



