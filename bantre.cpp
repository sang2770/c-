#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, k,a;
	cin>>n>>k;
//	vector<int> res;
    long long res=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		res+=a/7;
		}
	cout<<res*k*3;
	
		
	
	
}


