#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  float a, b, c;
  cin>>a>>b>>c;
  if(a!=0)
  {
  float res=b*b-4*a*c;
  float S=-b/a;
  float P=c/a;
  if(res>0 && P>0 && S>0)
   cout<<4;
   else if(res>0 && P==0&& S>0)
   cout<<3;
   else if(res==0 && S>0 || res>0 && P<0)
    cout<<2;
   else if(res>0 && S<0 && P==0||res==0 && S==0 && P==0)
   cout<<1;
   else 
   cout<<0;
   }
   else
   {
   	if(b!=0)
   	 {
   	 	if(-c/b>0)
   	 	 cout<<2;
   	 	else if(-c/b==0)
   	 	 cout<<1;
   	 	else
   	 	cout<<0;
   	 	}
   	else
   	{
   		if(c!=0)
   		 cout<<0;
   		else
   		cout<<-1;
   	 	 
   	 	 }
   	 }	
   	 
   }
   


