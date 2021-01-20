#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  getline(cin, s);
  vector<char>A;
  for(int i=0;i<s.size();i++)
   {
   if(s[i]=='0' || s[i]=='1')
   A.push_back(s[i]);
   if(s[i]=='B' && A.size()!=0)
   A.pop_back();
   }
   for(int i=0;i<A.size();i++)
    cout<<A[i];
    
    }


