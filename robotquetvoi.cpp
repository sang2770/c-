#include<bits/stdc++.h>
using namespace std;
int main()
{
	int res=0;
	int n=3;
	int a[100]={};
	while(n--)
	{
		int a1, b;
		cin>>a1>>b;
		for(int i=a1;i<b;i++)
		a[i]++;
	}
	for(int i=0;i<=100;i++)
	{
	if(a[i]==0)
	res++;
    }
	cout<<res;
	
}


