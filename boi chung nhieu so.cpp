#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[n+3];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n);
   int j=a[n-1];
   while(j>0)
   {
   	int i;
   	for(i=0;i<n;i++)
   	 if(j%a[i]!=0)
   	 break;
   	if(i==n) 
   	 {cout<<j;
   	 break;
   	 }
   	else
   	j+=a[n-1];
   	}
   	}
   	  



