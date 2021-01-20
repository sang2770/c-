#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a[9];
  for(int i=0;i<8;i++)
   cin>>a[i];
   int dem1=0, dem2=0;
   for(int i=1;i<8;i++)
    {
    	if(a[i]>a[i-1])
    	 dem1++;
    	if(a[i]<a[i-1])
    	 dem2++;
    	 }
    if(dem1==7)
     cout<<"TANG";
    else if(dem2==7)
     cout<<"GIAM";
     else
       cout<<"KHONGBIET";
       }
    	 



