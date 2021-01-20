#include<bits/stdc++.h>
using namespace std;
int dem=0;
queue<int>A;
vector<int>save;
map<int, int>M;
int bfs(int n)
{
	A.push(n);
	while(A.size()!=0)
	{
		int x=A.front();
		A.pop();
		for(int i=1;i*i<=x;i++)
		 if(x%i==0)
		 {
		 	int v=(i-1)*(x/i+1);
		 	if(M.find(v)==M.end())
		 	{
		 	  dem++;
		  	  A.push(v);
		  	  M[v]=1;
		  	 save.push_back(v);
		  	  
		  	  }
		  	  }
		  	  }
		  	  }
		  	  
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  bfs(n);
  cout<<dem<<endl;
  sort(save.begin(), save.end());
  for(int i=0;i<save.size();i++)
   cout<<save[i]<<" ";
  }



