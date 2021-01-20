#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int *a=new int[n+1];
  a[0]=1;
  a[1]=1;
  for(int i=2;i<=n;i++)
   a[i]=a[i-1]+a[i-2];
  cout<<a[n];
  }

