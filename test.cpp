#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int dem=0;
int A[3]={1, 2, 3};
int BFS()
{
	queue<ll>save;
	save.push(0);
	while(save.size()!=0)
	{
		int x=save.front();
		save.pop();
		if(x==n)
		 dem++;
		for(int i=0;i<3;i++)
		{
			if(x+A[i]<=n)
			 save.push(x+A[i]);
			 }
	}
	
	if(save.size()==0)
	 return 0;
	
	 }
			 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  
  cin>>n;
  BFS();
  cout<<dem;
}



