#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  getline(cin, s);
  string a="", b="";
  for(int i=8;i<s.size();i++)
   a+=s[i];
   
   for(int i=0;i<2;i++)
   b+=s[i];
  
   int c=0;
   c+=(int)a;
   cout<<c;
    
    
    
   
  
  }
  



