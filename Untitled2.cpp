#include<bits/stdc++.h>
using namespace std;
#define ll long long
void thapnh(int n)
{
	stack<int> save;
	while(n>0)
	{
		save.push(n%2);
		n=n/2;
		
	}
	while(save.size()!=0)
	{
		cout<<save.top();
		save.pop();
	}
	
}
int main()
{
	int n;
	cin>>n;
	thapnh(n);
}


