#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sx(int *a, int n)  //a0... a[n-1]
{
	if(n==0) return ;
	sx(a, n-1);        //a[0]... a[n-2]
	n--;
	while(n>0 && a[n]<a[n-1])
	{
		swap(a[n], a[n-1]);
		n--;
	}
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[]={3,7,8,2,5,8,9,3,10};
	int n=sizeof(a)/sizeof(int);
	sx(a, n);
	for(int x:a)
	cout<<x<<" ";
}


