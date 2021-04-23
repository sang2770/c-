#include<bits/stdc++.h>
using namespace std;
#define ll long long
//stack

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	stack<int> s;
	for(int x:{4,7,2,7,9})
	{
		s.push(x);
	}
	s.top()=1;
	while(!s.empty())
	{
		cout<<s.top(); s.pop();
		}
}


