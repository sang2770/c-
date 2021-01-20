#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n,m;
  cin>>n>>m;
  vector<ll>save;
  float res=0, dem=0;
  int a[n+1][m+1];
  int b[m+1]={};
  for(int i=1;i<=n;i++)
   {
   	ll tong =0;
   	for(int j=1;j<=m;j++)
   	{
   		cin>>a[i][j];
   		tong+=a[i][j];
   		if(i%2==0 && j%2!=0 && a[i][j]%3==0)
   		{
		   res+=a[i][j];
   		   dem++;
   		}
   		if(a[i][j]>b[j])
   		b[j]=a[i][j];
   		}
   	save.push_back(tong);
   	}
   	
   	for(int i=0;i<save.size();i++)
   	 cout<<save[i]<<" ";
   	cout<<endl;
 	for(int j=1;j<=m;j++)
   	 cout<<b[j]<<" ";
   	cout<<endl;
   	if(dem!=0)
      printf("%.2f", res/dem);
    else 
    cout<<"khong co so thoa man";
    
   	 }
   	
   	
   	
