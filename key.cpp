#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  map<int, int>A;
  vector<pair<int ,int>>M;
  int n;
  cin>>n;
  int x;
  for(int i=0;i<n;i++)
   {cin>>x;
   A[x]++;
   }
   for(auto it:A)
    M.push_back({it.first, it.second});
    sort(M.begin(), M.end());
    int max=M[0].second;
    
    for(int i=1;i<M.size();i++)
      if(max<M[i].second)
       max=M[i].second;
    cout<<max<<endl;
    for(int i=0;i<M.size();i++)
      if(M[i].second==max)
       cout<<M[i].first<<" ";
    

	     }    
   



