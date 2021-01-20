#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, m,x;
  stack<int>A;
  cin>>n;
 
  for(int i=0;i<n;i++)
   {cin>>x;
   if(A.empty() || x!=A.top()) A.push(x);
   }
   cin>>m;
   for(int i=0;i<m;i++)
   {
   	cin>>x;
   	while(A.size()>0 && A.top()<=x)  A.pop();
   	A.push(x);
   	cout<<A.size()<<endl;
   	}
   	}
   	
   
   
  
   	
   		 	
   		 	
   
   
  



