#include<bits/stdc++.h>
using namespace std;
string daonguoc(string s)
{
	string res="";
	for(int i=s.size()-1;i>=0;i--)
	 res+=s[i];
	return res;
	}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  //int *p=(int*)nalloc(n*sizeof(int));
  string s;
  getline(cin, s);
  
  cout<<daonguoc(s);
  }
  
  
  



