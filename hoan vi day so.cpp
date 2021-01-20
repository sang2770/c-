#include<bits/stdc++.h>
using namespace std;
vector<string>save;
char a[10];
int n;
int dau[10]={}; // dau tu 0  den 9 la 0
void quaylui(string s)
{
	// dk dung
	 if(s.size()==n)
	  save.push_back(s);
	 // quy luat 
	else
	 {
	 	 for(int i=1;i<=n;i++)
	 	  if(dau[i]==0)
	 	  {
	 	  	 dau[i]=1;
	 	  	 quaylui(s+a[i]);
	 	  	 dau[i]=0;
	 	  	 }
	}}
int main()
{
	// hoan vi mot chuoi so
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++)
   a[i]= char(int('0'+i));// cac so chua hoa vi chuyen sang kieu char
   
   quaylui("");
   cout<<save.size()<<endl;
   for(int i=0;i<save.size();i++)
    cout<<save[i]<<endl;
    
   }

   
   
   
  
 


