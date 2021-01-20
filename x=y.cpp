#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	double hd, td;
}TD;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, dem=0;
  cin>>n;
  TD a[n+1];
  for(int i=0;i<n;i++)
   {
   	cin>>a[i].hd>>a[i].td;
   	}
   	for(int i=0;i<n-1;i++)
   	 for(int j=i+1;j<n;j++)
   	  {
   	  	if(a[i].hd==a[i].td && a[j].hd!=a[j].td ||a[i].hd!=a[i].td && a[j].hd==a[j].td )
   	  	 dem++;
   	  	 if(a[i].hd!=a[i].td && a[j].hd!=a[j].td)
   	  	   if((a[i].hd-a[i].td)*(a[j].hd-a[j].td)<0)
   	  	       dem++;
   	  	 }
   	cout<<dem;
   	}
   	  	
  
  

