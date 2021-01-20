#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n,a ;
  cin>>n;
  vector<int>save;
  for(int i=0;i<n;i++)
   {
   	cin>>a;
   	save.push_back(a);
   	}
   	sort(save.begin(), save.end());
   	for(int i=0;i<save.size();i++)
   	cout<<save[i]<<" ";
   	int dem=0, max=0, i=0;
   	int vt=save.front();
   	while(save.size()!=0)
   	{
		int k=save.front();
			if(save[i]-vt<=1)
   		 { 
			save.erase(save.begin());
			dem++;
			if(max<dem)
   		     max=dem;}
   		 
   		 else
   		 {
		
			vt=save.front();
			save.erase(save.begin());
			dem=1;
   		    }}
   	
   		
   		 cout<<max;
   		 }

   		 
   	
   
