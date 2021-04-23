#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ve cay
void ve(int n, int k, string d="\n")
{
//	if(n<=k|| (n+k)%2) cout<<"\n"+string(d, '\t')<<n;
	if(n<=k|| (n+k)%2) cout<<d<<n;
	else
	{
		ve((n-k)/2, k, d+"\t");
		
		cout<<d<<n;
		ve((n+k)/2, k, d+"\t");
		
	}
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ve(60, 4);
	
}


