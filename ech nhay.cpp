#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int p, n;
  cin>>p>>n;
  int a[n+3];
  for(int i=0;i<n;i++)
   cin>>a[i];
   int i;
   for(i=0;i<n-1;i++)
    if(a[i+1]>p+a[i])
     break;
    if(i==n-1)
     cout<<"YOU WIN";
     else
     cout<<"GAME OVER";
     }


