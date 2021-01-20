#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  getline(cin, s);
  for(int i=0;i<s.size();i++)
   if(s[i]==',')
    s[i]=' ';
    cout<<s;
    }



