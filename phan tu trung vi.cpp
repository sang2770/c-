#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<int> L ; // uu tien lon
	priority_queue<int, vector<int>, greater<int>> R;  // uu tien be
	int n, x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		i%2!=0? L.push(x): R.push(x);  
//		cout<<L.top()<<endl;
		if(i>1 && L.top()>R.top())
		{
			int u=L.top(); L.pop();
			int v=R.top(); R.pop();
			L.push(v);
			R.push(u);
		}
		cout<<L.top()<<" ";
	}
}



