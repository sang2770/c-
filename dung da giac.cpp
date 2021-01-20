#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	int a;
  	cin>>a;
  	float tg=360/(float)(180-a);
  	if(tg==(int)tg)
  	cout<<"YES"<<endl;
  	else
  	cout<<"NO"<<endl;
  	}
  	}
