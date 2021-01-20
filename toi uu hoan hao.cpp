#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  ll a[7]={6, 28, 496, 8128,33550336,8589869056,137438691328};
     
 for(int k=0;k<t;k++)
  {
  	ll n,i, dem=0;
  	cin>>n;
  	for(int i=0;i<=6;i++)
	 if(n==a[i])
  	 { cout<<n<<" eh perfeito "<<endl;
  	 dem++;
  	  break;
  	  }
  	if(dem==0)
  	cout<<n<<" nao eh perfeito "<<endl;
  	}
  	}
