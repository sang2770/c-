#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int x, y;
  cin>>x>>y;
  int res=0;
  int vt1, vt2;
  int i=0;
  while(true)
  {
  	if(13*i<x)
  	 vt1=i;
  	if(13*i>y)
  	vt2=i;
  	i++;
  }
  cout<<vt1<<" "<<vt2;
	
	
	  
	  }

