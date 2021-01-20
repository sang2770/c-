#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int  a;
  float res=0, dem=0;
  while(true)
  {
  	cin>>a;
  	if(a>=0)
  	{
  		res+=a;
  		dem++;
  		}
  	else
  	break;
  	}
  	res=res/dem;
  	printf("%.2f", res);
  	}
