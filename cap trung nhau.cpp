#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, dem=0;
  cin>>n;
  vector<pair<int, int> >A;
  map<pair<int, int>, int>save;
  for(int i=0;i<n;i++)
   {
   int a, b;
   cin>>a>>b;
   A.push_back({a, b});
   save[{a, b}]++;
   if(save[{a, b}]!=1)
   dem++;
   }
   if(dem==0)
   cout<<"NO";
   else cout<<"YES";
    
}
    
  
  

