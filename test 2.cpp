#include<bits/stdc++.h>
using namespace std;
vector<string>save;
string a;

int dau[15]={}; 
void quaylui(string s)
{
	// dk dung
	 if(s.size()==a.size())
	  save.push_back(s);
	 // quy luat 
	else
	 {
	 	 for(int i=0;i<a.size();i++)
	 	  if(dau[i]==0)
	 	  {
	 	  	 dau[i]=1;
	 	  	 quaylui(s+a[i]);
	 	  	 dau[i]=0;
	 	  	 }
	}}
int main()
{

  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>a;
  
   
   quaylui("");
   sort(save.begin(), save.end());
   cout<<save.size();
   for(int i=0;i<save.size();i++)
    cout<<save[i]<<endl;
    
   }

   
   
   
  
 


