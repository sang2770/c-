#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a[3];
  int dem=0;
  for(int  i=0;i<3;i++)
  cin>>a[i];
  for(int i=0;i<2;i++)
   for(int j=i+1;j<3;j++)
    if(a[i]!=a[j])
     dem++;
     if(dem==0)
      cout<<1;
      else
      cout<<dem;
  }
  
  



