#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int a[10]={INT_MAX,1,3,4,7,2,3,4,9,5};
	stack<int> out;
	out.push(0);
	for(int i=1;i<=9;i++)
	{
		while(a[i]>a[out.top()]){
			out.pop();
		}
		cout<<out.top()<<" ";
		out.push(i);
	}
	
	
}


