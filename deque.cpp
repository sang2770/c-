#include<bits/stdc++.h>
using namespace std;
#define ll long long
//deque

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	deque<int> Q;
	for(int i=1;i<10;i++)
	i%2?Q.push_front(i):Q.push_back(i);
	while(Q.size())
	{
		cout<<Q.front();
		Q.pop_front();
	}
//	while(Q.size())
//	{
//		cout<<Q.back();
//		Q.pop_back();
//	}
	
}


