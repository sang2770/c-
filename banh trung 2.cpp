#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem=0,dem1=0,dem2=0,dem3=0,dem4=0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n ; i ++)
		cin >> a[i];
	for(int i = 0; i < n ; i ++)
	{
		if(a[i] == 1)
		dem1++;
		else if(a[i] == 2)
		dem2++;
		else if(a[i] == 3)
		dem3++;
		else 
		dem4++;
	}
	dem=dem3+dem4;
	dem1-=dem3;
	dem+=dem2/2;
	if(dem2%2)
	{
		dem+=1;
		dem1-=2;
	}
	if(dem1>0)
	{
		dem+=dem1/4;
		dem+=dem1%4?1:0;
	}
	cout << dem;
	

}
