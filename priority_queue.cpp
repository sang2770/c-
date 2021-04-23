#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Hang doi uu tien
// Sap xep co dieu kien
struct ss{
	int operator() (int a, int b)
	{
		if(a%3!=b%3)
		return a%3>b%3;
		return a>b;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	//Mac dinh: uu tien lon
//	priority_queue<int> Q;
	// Uu tien be
//	priority_queue<int, vector<int>, greater<int>>Q;
//	for(int x: {4, 7,9,8,7,5,3,2,0})
//	Q.push(x);
	priority_queue<int, vector<int>, ss>Q;
	int n, x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		Q.push(x);
	}
	while(not Q.empty())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
	
}


