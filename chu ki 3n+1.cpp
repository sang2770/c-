#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll n;
  cin>>n;
  vector<ll>save;
  save.push_back(n);
  while(true)
  {
  	if(n%2!=0)
  	 {n=n*3+1;
  	 save.push_back(n);
  }
  	else
  	 {
  	 	n=n/2;
  	 	save.push_back(n);
  	 	
	   }
	if(n==1)
	 break;

}
   cout<<save.size()<<" ";
   for(int i=0;i<save.size();i++)
    cout<<save[i]<<" ";
    
  	  
  }
  

