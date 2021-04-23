#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Ham so sanh
struct ss{
	int operator()(int a, int b)
	{
		if(a%3==b%3 )return a>b;
		return a%3>b%3;
	}
		
	
};
struct ss1{
	int operator()(int a, int b)
	{
		return a>b;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<int, vector<int> , greater<int>>Q;
	for(int x:{1,3,2,5,76,2,5})
		Q.push(x);
	while(!Q.empty())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
	/*
	priority_queue+pair  // so sanh first truoc
	*/
	cout<<"Bai 2"<<endl;
	priority_queue<pair<int, int>> S;
	int i=0;
	for(auto x:{1,2,3,4,5,7,2})
	{
		S.push({x, i});
		i++;
	}
	while(!S.empty())
	{
		cout<<S.top().first<<" "<<S.top().second<<endl;
		S.pop();
	}
	/* 
	set
	*/
	multiset<int> a;
	for(int x:{1,1,3,3,4,6,3,2})
	a.insert(x);
	for(auto x: a)
	{
		cout<<x<<" ";
	}
	/* deque*/
	deque<int> F;
	F.push_back(2);
	F.push_front(1);
	while(!F.empty())
	{
		cout<<F.front()<<" ";
		F.pop_front();
	}
	// bai 3
	cout<<"Bai 3"<<endl;
	priority_queue<int, vector<int> ,ss1> K;
	for(int x:{1,3,2,5,76,2,5})
		K.push(x);
	while(!K.empty())
	{
		cout<<K.top()<<" ";
		K.pop();
	}
}


