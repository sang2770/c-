#include<bits/stdc++.h>
using namespace std;
#define ll long long
void SX(int *a, int n)
{
	if(n==0)
	return ;
	SX(a, n-1);
	n--;
	while(n>=0 && a[n]<a[n-1])
	{
		swap(a[n], a[n-1]);n--;
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n-1];
	int i=0;
	while(i<n)
	{
		cin>>a[i];
		i++;	
	}
	SX(a, n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}


