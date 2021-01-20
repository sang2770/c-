#include<bits/stdc++.h>
using namespace std;
//truy van ve tong

int main()
{
	int n;
	cin>>n;
//	vector<int> a(n+5);
    int a[n];
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i];
	a[i]+=a[i-1];
    }
	int m , L, R;
	cin>>m;
	while(m--)
	{
		cin>>L>>R;
		cout<<a[R]-a[L-1]<<endl;
	}
}


