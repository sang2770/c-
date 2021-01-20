#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  float a[n+1], b[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i]>>b[i];
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   	int c;
   	cin>>c;
   	int k=0;
   	float res=0;
   	for(int j=1;j<n;j++)
   	{
	   if(c>=a[j]-a[j-1])
       {
	   res+=(a[j]-a[j-1])*b[k];
       k++;
       c=c-(a[j]-a[j-1]);}
   }
      if(c>0)
      res+=c*b[k];
	   
	printf("%.3f\n", res);
   }
}
   
