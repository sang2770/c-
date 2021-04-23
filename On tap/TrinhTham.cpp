#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Y tuong : Cho vao dqueue duyet loc sao cho phan tu lon nhat trong khoang k nam o dau dqueue
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	deque<int> Q;
	
	for(int i=0;i<k;i++)
	{
		while(Q.size()!=0 && a[Q.back()]<a[i] ) Q.pop_back();
		Q.push_back(i);
		
	}
	for(int i=k-1;i<n;i++)
	{
		while(Q.size()!=0 && a[Q.back()]<a[i] ) Q.pop_back();
		Q.push_back(i);
		
//		Kiem soat do dai khung hinh
		if(i-Q.front()+1>k)  Q.pop_front();
		cout<<a[Q.front()]<<" ";
	}
	
	
}


