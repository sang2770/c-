#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b;
  cin>>a>>b;
  if(a>=b)
  cout<<"Tran dau keo dai "<<24-a+b<<" gio";
  else if(a==b)
  cout<<"Tran dau keo dai "<<24<<" gio";
  else if(a<b)
  cout<<"Tran dau keo dai "<<b-a<<" gio";
 }
  
   
  
  
  

