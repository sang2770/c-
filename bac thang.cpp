
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>save;
int dequy(int a)
{
	if(a==n)
	 {
	 save.push_back(1);
	 a=0;
	 return 0;
	 }
	else if(a<n)
	{
		if(a+1<=n)
		dequy(a+1);
		if(a+2<=n)
		dequy(a+2);
		if(a+3<=n)
		dequy(a+3);
		
		}
		}
  int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n;
 
  dequy(0);
  cout<<save.size();
  }
   		
     
  



