#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int p;
   cin>>p;
   ll res=0;
   if(p<=n/2)
{  int dem=1;
   for(int i=0;i<=p;i+=2)
      if(dem<i)
       {
	   dem+=i;res++;}
}
    else
    {
    	if(n%2==0)
    	{
		dem=6;
    	 while(dem!=p)
	}

cout<<res;
   }

  
   
  

