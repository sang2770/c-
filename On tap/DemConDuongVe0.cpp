#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	stack<int> S;
	S.push(n);
	int dem=0;
	while(S.size()!=0)
	{
		int a=S.top();
		S.pop();
		for(int i=1;i*i<=a;i++)
		{
			if(a%i==0)
			{
				int v=(i-1)*(a/i+1);
				if(v==0)
					dem++;
				else
					S.push(v);
			}
		}
	}
	cout<<dem;
}


