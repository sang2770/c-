#include<bits/stdc++.h>
using namespace std;
// liet ke cac xau con
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  vector<string> save;
  string s;
  cin>>s;
  map<string, int >xuathien;
  for(int i=0;i<s.size(); i++)
   {
   	 string str="";
   	 for(int j=0;j<s.size();i++)
   	  {
   	  	str+=s[j];
   	  	if(xuathien.find(str)== xuathien.end())
   	  	{
   	  		save.push_back(str);
   	  		xuathien[str]=1;
   	  		}
   	  		}
   	  		}
   	sort(save.begin(), save.end());
   	for(int i=0;i<save.size();i++)
   	 cout<<save[i]<<endl;
   	 }


