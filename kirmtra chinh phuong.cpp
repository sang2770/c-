#include<bits/stdc++.h>
using namespace std;
bool ktcp(long long n)
{
	if(n<0 || n%4>1|| n%3>1) return false;
	long long L=0, R=n;// tim mot so thuoc doan 0, n bình phuong len bang n
//	while(L<=R)
//	{
//		long long M=(L+R)/2;
//		if(M*M==n)
//		return true;
//		M*M<n?L=M+1:R=M-1;
//		}
	for(long long L=0,R=n;L<=R;)
	{
		long long M=(L+R)/2;
		if(M*M==n)
		return true;
		M*M<n?L=M+1:R=M-1;}
		return false;
		}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	for(int i=0;i<1000;i++)
	if(ktcp(i)) cout<<i<<" ";
	
}


