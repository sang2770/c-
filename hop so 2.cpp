#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int t;
  cin>>t;
  int a[t+3];
  for(int i=0;i<t;i++)
   cin>>a[i];
   for(int i=0;i<t;i++)
   {
   	if(a[i]==2)
   	cout<<a[i]<<" la so nguyen to "<<endl;
   	else
   	{
   	int tg=a[i]/2;
   	int dem=0;
   	for(int j=tg;j>=3;j--)
   	 if(a[i]%j==0)
   	   {cout<<a[i]<<" la hop so vi chia het cho "<<j<<endl;
   	   dem++;
   	   break;
   	   }
   	 
   	  if(dem==0)
   	   cout<<a[i]<<" la so nguyen to "<<endl;
   	
   	}}
   	}
