#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[10];
  for(int i=0;i<3;i++)
   cin>>a[i];
   sort(a, a+3);
   int res=0, dem=0;
   for(int i=0;i<=n/a[0];i++)
     for(int j=0;j<=n/a[1];j++)
       {
       	if((n-(i*a[0]+j*a[1]))%a[2]==0 &&n-(i*a[0]+j*a[1])>=0)
       	 {
       	 	int tg=i+j+(n-(i*a[0]+j*a[1]))/a[2];
       	 	if(dem<tg)
       	 	 dem=tg;
       	 	}
       
    }
    cout<<dem;
   
   	   
   }
