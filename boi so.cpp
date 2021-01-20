#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a;
int dem[4]={};
  for(int i=0;i<n;i++)
   {cin>>a;
   if(a%2==0) dem[0]++;
   if(a%3==0) dem[1]++;
   if(a%4==0) dem[2]++;
   if(a%5==0) dem[3]++;
   }
   for(int i=2, j=0;i<=5;i++, j++)
    cout<<dem[j]<<" Multiplo(s) de "<<i<<endl;
    }
    
  




