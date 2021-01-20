#include<bits/stdc++.h>
using namespace std;
vector<pair< int ,int > > A;
int main()
{
	int n, m;
	cin>>n>>m;
	
	while(n>0&& m>0 && m+n>=3)
	{
		if(n<m)
		{A.push_back({1,2}); n=n-1; m=m-2;}
		else
	{	A.push_back({2, 1});n=n-2;m=m-1;
		}}
		
	cout<<A.size()<<endl;
		
	for(int i=0;i < A.size() ; i++)
	cout<<A[i].first<<" "<<A[i].second<<endl;
	}
	 


