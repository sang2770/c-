#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  double a, b;
  cin>>a>>b;
  double tg=b-a;
  tg=tg/a*100;
  cout<<setprecision(2)<<fixed<<tg<<"%";
  }

