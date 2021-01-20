#include<bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int *a=new int[n+1];
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a, a+n);
   vector<int> save;
   int i=0;
   while(n-1-i>=i)
   {
   	save.push_back(a[n-1-i]);
   	if(n-1-i!=i)
   	save.push_back(a[i]);
   	i++;
   	}
   	long long res=0;
   	for(int i=0;i<save.size();i++)
   	 res+=save[i]*pow(-1, i);
   	
   	cout<<res;
   	
   	
   	 
   	
   	
   	
   	 }
   

