#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool timkiem(int *a, int x, int L, int R)
{
	while(L<=R)
	{
		int mid=(L+R)/2;
		if(a[mid]==x) return true;
		if(a[mid]>x) R=mid-1;
		else L=mid+1;
	}
	return false;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={1,2,3,5,7,9,10};
	int n=sizeof(a)/sizeof(int);
//	sort(a,a+n);
	for(int x:a)
	cout<<x<<" ";
	if(timkiem(a, 11, 0, n-1)==true) cout<<"Cos";
	else
	cout<<"Khong";
	
}


