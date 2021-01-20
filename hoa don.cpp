#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int test;
  cin>>test;
  int *a=new int[test+1];
  for(int i=0;i<test;i++)
   cin>>a[i];
   for(int i=0;i<test;i++)
    if(a[i]%2==0)
     cout<<0<<endl;
    else
     cout<<1<<endl;
     }
     
  

