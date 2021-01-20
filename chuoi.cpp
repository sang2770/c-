#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  double s=0;
//  s=1/5050;
//  cout<<setprecision(6)<<fixed<<s;
for(int i=1;i<=100;i++)
   s+=1/(float)i;
  cout<<setprecision(6)<<fixed<<s;
  }

