#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  float a, b;
  cin>>a>>b;
  if(a==0&& b==0)
   cout<<"Origem";
   else if(a==0 &&b!=0) cout<<"Eixo Y";
   else if(a!=0 && b==0) cout<<"Eixo X";
   else
   {
   	 if(a>0 && b>0) cout<<"Q1";
   	 else if(a<0 && b>0) cout<<"Q2";
   	 else if(a<0 && b <0 ) cout<<"Q3";
   	 else cout<<"Q4";
   	 }
   	 }
   
  

