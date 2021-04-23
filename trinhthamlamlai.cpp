//trinh tham 2
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	int a[n+5]={};
	deque<int> Q;  //hang doi chua chi so
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<k;i++)
	{
		while(Q.size()!=0 && a[Q.back()]<a[i] )
		Q.pop_back();
		Q.push_back(i);
	}
	for(int i=k-1;i<n;i++)
	{
		while(Q.size()!=0 && a[Q.back()]<a[i] )
		Q.pop_back();
		Q.push_back(i);
		while(i-Q.front()+1>k)  Q.pop_front();
		cout<<a[Q.front()]<<" ";
	}
	
}


