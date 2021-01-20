#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b;
  cin>>a>>b;
  int t=a*b;
  int res;
  int tg;
  tg=max(a, b);
  for(int i=tg;i<=t;i+=tg)
   if(i%a==0 && i%b==0)
    {
    	res=i;
    	break;
    	}
    cout<<res;
    
}
    	



