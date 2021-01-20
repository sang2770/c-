#include<bits/stdc++.h>
using namespace std;
bool ss(int a, int b)
{
	return a>b;
	}
	
int main()
{
	int n, a;
	cin>>n;
	vector <int > A;
	for(int i=0;i<n;i++)
	{cin>>a;
	 A.push_back(a);
	 }
	
	sort(A.begin(), A.end(), ss);
	int res=0;
	int doso=1;
	for(int i=0;i<n;i++)
	{
		if(doso*i<A[i])
		 
		 	res+=A[i]-doso*i;
		 	
		 	}
	cout<<res;
	}	 	
		
	 


