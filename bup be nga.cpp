#include<bits/stdc++.h>
using namespace std;
bool ss(int a, int b)
{
	return a>b;
	}
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, k;
  cin>>n>> k;
  int a[n+3];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n, ss);
   /*int dem=1;
   int tong=a[0];*/
   vector< int > A;
   A.push_back(a[0]);
   
   int i=1, j=0;
   while(i<n)
   {
    if(a[j]>=a[i]+k)
     {
     	i++;
     	j++;
     	}
    else
    {
    	A.push_back(a[i]);
    	
        i++;
}}
    cout<<A.size()<<endl;
    
    for(int i=0;i<A.size();i++)
     cout<<A[i]<<" ";
	 }     
  



