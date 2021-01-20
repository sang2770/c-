#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a[3];
  for(int i=0;i<3;i++)
   cin>>a[i];
   sort(a, a+3);
   int tg=a[0]+a[1];
   if(tg==a[2])
    cout<<"Yes";
    else
    cout<<"No";
}
   

