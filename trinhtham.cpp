#include<bits/stdc++.h>
using namespace std;
#define ll long long
void show(deque<int> a)
{
	for(auto z: a)
	cout<<z<<" ";
	cout<<endl;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n+5];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	deque<int> Q; //hang doi hai dau chua cac chi so 
	for(int i=1;i<=k;i++)
	{
		while(Q.size() && a[Q.back()]<=a[i]) Q.pop_back();
		Q.push_back(i);
	}
//	show(Q);
	for(int i=k;i<=n;i++)
	{
		while(Q.size() && a[Q.back()]<=a[i]) Q.pop_back();
		Q.push_back(i);
//		show(Q);
		while(i-Q.front()+1>k) Q.pop_front();
		cout<<a[Q.front()];
	}
	
}


