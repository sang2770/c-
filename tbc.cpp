#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  if(n==0)
  cout<<0<<"\n"<<0;
  else
  {
  	float tbc1=0, tbc2=0;
  	int dem1=0, dem2=0;
  	int a[n+1];
  	for(int i=0;i<n;i++)
  	{cin>>a[i];
  	if(a[i]%2!=0)
  	 {tbc1+=a[i];
  	 dem1++;}
  	 
  	 else
  	 {tbc2+=a[i];dem2++;
  	 }}
  	 if(dem1==0&&dem2!=0)
  	 cout<<0<<"\n"<<(int)tbc2/dem2;
  	 else if(dem1!=0&&dem2==0)
  	 cout<<(int)tbc1/dem1<<"\n"<<0;
  	 else
  	 cout<<(int)tbc1/dem1<<"\n"<<(int)tbc2/dem2;
  	
  	 }
  	 }
  	


