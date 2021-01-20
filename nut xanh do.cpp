#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int dem=0;
 int n, m;	
 map<int, int>test;
 int bfs(int n)
 {
 	queue<int>save;
 	save.push(n);
 	test[n]=1;
 	while(save.size()!=0)
 	{
 		int x=save.front();
 		save.pop();
// 		dem++;
 		if(x==m)
 		 return dem;
 		else
 		{
 		  if(x-1!=0 && test.find(x-1)==test.end())
 		  {
		   save.push(x-1);
		   test[x-1]=1;}
 		  
		  if(test.find(x*2)==test.end())
		  {
		  test[x*2]=1;
 		  save.push(x*2);}
 		  dem++;
 		  
		 }
 		
	 }
 }
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  cin>>n>>m;
  cout<<bfs(n);
  
  
  	}
  	

