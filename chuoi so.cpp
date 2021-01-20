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
   int j=a[0]+1;
   int max=a[n-1];
   int min=0;
   for(int i=0;i<n;i++)
    min+=pow((a[0]-a[i]),2);
   while(j<=max)
   {
   	int res=0;
   	
   	for(int i=0;i<n;i++)
   	 res+=pow((j-a[i]),2);
   	if(min>res)
   	min=res;
   	j++;
   	}
  cout<<min;
   	}
   
  



