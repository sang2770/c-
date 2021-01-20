#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  vector<pair<int, int> >save;
  for(int i=1;i<=n-1;i++)
  {
  	int min=i, max=0;
  	int res=i;
  	for(int j=i+1;j<=n;j++)
  	 if(res+j<=n)
  	 {
	   res+=j;
  	   if(res==n)
  	   max=j;
     }
    if(max!=0)
    save.push_back({min, max});
}
 cout<<save.size()<<endl;
 for(int i=save.size()-1;i>=0;i--)
  cout<<save[i].first<<" "<<save[i].second<<endl;
  
  }
  

