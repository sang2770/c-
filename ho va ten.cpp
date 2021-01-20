#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  getline(cin, s);
  int vt;
  int i=0;
  while(true)
  {
   if(s[i]==' ')
   {
   	vt=i;
   	break;
   }
   i++;
}
   for(int i=vt+1; i<s.size();i++)
    cout<<s[i];
    cout<<" ";
    for(int i=0;i<vt;i++)
    cout<<s[i];
}
   
   

