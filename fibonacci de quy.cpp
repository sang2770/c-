#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, long long> D;
long long fibonacci(int n)
{
	if(D.find(n)!=D.end()) return D[n];
	return D[n]=n<2?1:fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	for(int k=0;k<50;k++)
	cout<<fibonacci(k)<<endl;
}


