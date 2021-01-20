#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n);
   if(a[0]>=0)
    cout<<a[0]*a[1];
    else if(a[0]<0 && a[n-1]>0)
     cout<<a[0]*a[n-1];
    else if(a[n-1]<=0)
     cout<<a[n-2]*a[n-1];
   }
    
    
   



