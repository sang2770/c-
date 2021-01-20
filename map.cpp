#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  map<int , int >m;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(auto b:a)
   m[b]++;
   /*int a[4]={1, 1, 3,2};
   for(auto i:a)
    m[i]++;*/
  
  for(auto M: m ) 
  cout<<M.first<<" "<<M.second<<endl;
  
   
  }


