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
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<int, vector<int> , ss> Q;
	for(int x:{1,3,2,5,76,2,5})
		Q.push(x);
	while(!Q.empty())
	{
		cout<<Q.top();
		Q.pop();
	}
}


