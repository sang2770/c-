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
  	double tong;
  	double a, b, c;
  	cin>>a>>b>>c;
  	tong=a*2+b*3+c*5;
  	tong=tong/10;
  	printf("%3.1f\n", tong);
  	}
  	}
  	

