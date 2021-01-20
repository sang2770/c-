#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b, c , d;
  cin>>a>>b;
  cin>>c>>d;
  if(a+c==b &&b==d || a+d==b&&b==c|| a==c &&b+d==c||a==d &&b+c==d)
  cout<<"YES";
  else
  cout<<"NO";
  }
    
   



