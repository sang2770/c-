#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int x, y;
  cin>>x>>y;
  long long res=0;
  int a=min(x, y);
  int b=max(x, y);
  for(int i=a;i<=b;i++)
   if(i%13!=0)
    res+=i;
cout<<res;

}

