#include<bits/stdc++.h>
using namespace std;
int dau[15]={};
map<string, int >xuathien;
string n;

vector<string>save;  // luu lai chuoi sap xep theo tu dien
void chuoi(string s)
{
	if(s.size()==n.size() && xuathien.find(s)== xuathien.end() )
	 {save.push_back(s);
	 xuathien[s]=1;
	 }
	else if(s.size()<n.size())
	 {
	 	 for(int i=0;i<n.size();i++)
	 	  {
	 	  	if(dau[i]==0)
	 	  	{dau[i]=1;
	 	  	 chuoi(s+n[i]);
	 	  	 dau[i]=0;
	 	  	 }
	 	  	 }}}
				 	 
		 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n;
  chuoi("");
  sort(save.begin(), save.end());
  cout<<save.size();
  for(int i=0;i<save.size();i++)
   cout<<save[i]<<endl;
   }
   
  


