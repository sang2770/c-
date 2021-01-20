#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int dem=0;
  int i=2;
  int j=0;
  while(j>=0)
  {
  	if(n>1)
  	{
  		if(n%i==0)
  	        {dem++;
  	        n=n/i;
  	        }
  		else
  		{if(dem>0) cout<<i<<" "<<dem<<endl;
  		 i++;
  		 dem=0;
		}
  		}
  	
  	else if(n==1) {
  		cout<<i<<" "<<dem;
  	 break;}
  	 j++;}
  	 }
  	   
  	



