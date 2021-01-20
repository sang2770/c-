#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c, d;
	cin>>c>>d;
	int a[n+3];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	int dem=0;
	
	for(int i=0;i<n;i++)
	 if(a[i]>=-c and a[i]<=d) 
	  dem++;
	cout<<dem<<endl;
	int i;
	if(n==2)
	{
	if(a[0]>=a[1])
	cout<<"NO";
	else cout<<"YES";
	}
	else
	{
	for(i=0;i<n-2;i++)
	 if(a[i] >= a[i+1])
	  break;
	if(i==n-2)
	 cout<<"YES";
	else
	cout<<"NO";}
	} 

