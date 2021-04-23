#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool BinarySearch(int *a, int L, int R, int n)
{
	if(L<=R)
	{
		int M=(L+R)/2;
		if(a[M]==n)
		return true;
		if(a[M]>n)
		return BinarySearch(a, L, M-1, n);
		else
		return BinarySearch(a, M+1, R, n);
	}
	return false;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={1,2,3,5,7,9,10};
	int size=sizeof(a)/sizeof(int);
	int n;
	cin>>n;
	cout<<(BinarySearch(a, 0, size-1, n)==true?"Yes":"No");
	
	
}


