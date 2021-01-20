#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  vector<int>A;
  int n, m;
  cin>>n;
  int a;
  for(int i=0;i<n;i++)
   {cin>>a;
   A.push_back(a);
   }
   cin>>m;
   int b;
   for(int i=0;i<m;i++)
    {cin>>b;
    A.push_back(b);
    }
    sort(A.begin(), A.end());
    for(int i=0;i<A.size();i++)
     cout<<A[i]<<" ";
    
     }



