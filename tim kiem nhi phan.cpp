#include<bits/stdc++.h>
using namespace std;
#define ll long long
int search(int *a, int l, int r, int n)
{
	if(r>=l)
	{
		int mid=(l+r)/2;
		if(a[mid]==n)
		return mid;
		if(a[mid]>n)
		 return search(a, l,mid-1, n );
		return search(a, mid+1,r, n);
	}
	return -1;
	}
		
		
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int a[5]={1, 5, 8, 9};
  int result=search(a, 0, 4, n);
  if(result==-1)
  cout<<"k tim thay";
  else
  cout<<"tai vi tri"<< result;
  }

