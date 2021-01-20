#include<bits/stdc++.h>
using namespace std;
bool ktra(int a)
{
	if(a==2)
	return true;
	if(a%2==0)
	return false;
	for(int i=3;i<(a-1);i+=2)
	 {if(a%i==0)
	 return false;}
	return true;
	 }
	  
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
   	if(ktra(a[i])==true)
   	 cout<<a[i]<<" la so nguyen to "<<endl;
   	else
   	{
   	  int tg=sqrt(a[i]);
   	  int b=a[i];
   	  for(int j=b-1;j>=tg;j--)
   	   {
   		if(a[i]%j==0)
   		 {cout<<a[i]<<" la hop so "<<j<<endl;
   		 break;
   		 }}
   	
   	}
   	}
   	}
   	
   	
   	
   	
   	
   	
   	
   	



