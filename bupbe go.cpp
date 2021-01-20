#include<bits/stdc++.h>

using namespace std;
bool ss(int a, int b)
{
	return a>b;
	}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+3];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	long long res=0;
	sort(a, a+n, ss);
	int j=0;
	for(int i=0;i<n;i++)
	 {
	 if(a[i]+k<=a[j])
	  j++;
	 else
	 res+=a[i];}
	cout<<res;
}
 
	
	
	 
	
	

		
		
		
		

