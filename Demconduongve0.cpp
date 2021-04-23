#include<bits/stdc++.h>
using namespace std;
#define ll long long
//dem so con duong di ve 0
ll D[1000005];

ll zero(int n)
{
	if(D[n]) return D[n];  //D[n]!=0
	if(n==0) return 1;
	ll k=0;
	for(int a=1; a*a<=n;a++)
	if(n%a == 0)
	 k+=zero((a-1)*(n/a+1));
	return D[n]=k;
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<zero(32)<<endl;
	int a[]={1,2,3,4,5,6};
	for(auto z:a)
	if(z%2==0)
	cout<<z;
	for(auto z: D)
	if(z)
	cout<<z<<" ";
}


