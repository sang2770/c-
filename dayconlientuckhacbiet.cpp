#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	for(int i=0;i<n-1;i++)
	{
		map<int, int> A;
		A[a[i]]++;
		int dem=1;
		for(int j=i+1;j<n;j++)
		{
			if(A[a[j]]==0)
			{
				dem++;
				A[a[j]]++;
			}
			else
			{
				break;
			}
		}
		if(max<dem) max=dem;
	}
	cout<<max;
	
	
}


