#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+3];
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	float max;
	max=a[1]/(float)n;
	int j=n-1;
	int i=2;
	while( i<=n and j>=1)
	{
		if(max<a[i]/(float)j)
		 {
		 	max=a[i]/(float)j;
		 	i++;
		 	j--;
		 	}
		else
		{
			i++;
			j--;}}
	printf("%3.2f\n", max);
	int res=a[1];
	if(n!=1)
	{for(int i=2;i<=n-1;i++)
	 res+=a[i]*2;
	 res+=a[n];}
	
	 cout<<res;
	 }
			
		
	


