#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  long long a=1e9 +7;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	long long n;
  	cin>>n;
  	long long b=pow(n, 2);
  	cout<<b%a<<endl;
  	
  }
  
}
  
