#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Pow(ll x, int n) // binh phuong va nhan
{
	if(n==0) return 1;
	return (n%2?x:1)*pow(x*x, n/2);
	
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	for(int i=0;i<=10;i++)
	cout<<Pow(3,i)<<" ";
	
	
}


