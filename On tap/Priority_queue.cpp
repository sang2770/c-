#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ss{
	int operator()(int a, int b)
	{
		if(a%2<b%2)
		return a<b;
		else
		return a>b;
		
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	// Mac dinh uu tien lon
	priority_queue<int> Q;
	for(int x:{1,5,6,2,4,7})
	{
		Q.push(x);
	}
	while(!Q.empty())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
	cout<<endl;
	// Uu tien be
	priority_queue<int, vector<int>, greater<int>> Q1;
	for(int x:{1,5,6,2,4,7})
	{
		Q1.push(x);
	}
	while(!Q1.empty())
	{
		cout<<Q1.top()<<" ";
		Q1.pop();
	}
	// Thu tu tu dinh nghia
	cout<<endl;
	priority_queue<int, vector<int>,ss> Q2;
	for(int x:{1,5,6,2,4,7})
	{
		Q2.push(x);
	}
	while(!Q2.empty())
	{
		cout<<Q2.top()<<" ";
		Q2.pop();
	}
	
}


