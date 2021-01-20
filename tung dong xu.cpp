#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string s;
  cin>>s;
  string a[8]={"SSS","SSN","SNS", "SNN", "NSS", "NSN","NNS","NNN"};
  map<string, int>save;
  int n=s.size();
  
  for(int i=0;i<=n-3;i++)
  {
    string name="";
  	for(int j=i;j<i+3;j++)
  	name+=s[j];
  	save[name]++;
  	}
  	for(int i=0;i<=7;i++)
  	 cout<<save[a[i]]<<" ";
  	


}
