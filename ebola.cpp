#include<bits/stdc++.h>
using namespace std;
vector<int>in[1000];
vector<int>save;
int n, m;
map<int, int>test;
queue <int>A;
void BFS(int m)
{
	A.push(m);
	save.push_back(m);
	test[m]=1;
	while(A.size()!=0)
	{
		int x=A.front();
		A.pop();
		for(int i=0;i<in[x].size();i++)
		{	if(test.find(in[x][i])==test.end())
		     {
		       int y=in[x][i];
			   A.push(in[x][i]);
			   save.push_back(in[x][i]);
			   test[in[x][i]]=1;
		}
		      
		      
			 
			  
		
	}
	}
}
			
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
 
  
  cin>>n>>m;
  int k, x;
  for(int i=1;i<=n;i++)
  {
  	cin>>k;
  	for(int j=1;j<=k;j++)
  	{
  		cin>>x;
  		in[i].push_back(x);
  		}}
  	BFS (m);
    sort(save.begin(), save.end());
  	cout<<save.size()<<endl;
  	for(int i=0;i<save.size();i++)
  	 cout<<save[i]<<" ";
  }
  	
  	



