#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  vector<pair<char, int>>A;
  getline(cin, s);
  map<char, int>M;
  for(int i=0;i<s.size();i++)
   M[s[i]]++;
   for(auto it:M)
    A.push_back({it.first, it.second});
    int i;
    for(i=0;i<A.size();i++)
     if(A[i].second%2!=0)
     break;
      
    if(i==A.size())
	 cout<<"YES";
	 else
	 cout<<"NO";
	   

  }
   
  



