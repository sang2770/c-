#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<int, vector<int>, greater<int>> L;  // Day tang dan
	priority_queue<int> R;							// Day Giam dan
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		i%2==0?R.push(x):L.push(x);
		if(i>0 && R.top()>L.top())
		{
			int u=L.top();
			int v=R.top();
			L.pop(), R.pop();
			L.push(v);
			R.push(u);
		}
		cout<<R.top()<<" ";
		
	}
	
}


