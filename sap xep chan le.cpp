#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[n+1];
  vector<int>A;
  for(int i=0;i<n;i++)
   {cin>>a[i];
    if(a[i]%2!=0)
     A.push_back(a[i]);
    }
    for(int i=n-1;i>=0;i--)
     if(a[i]%2==0)
       A.push_back(a[i]);
     for(int i=0;i<A.size();i++)
      cout<<A[i]<<" ";
      }
    
   



