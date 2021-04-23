#include<bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
	if(n==2)                // 1
	return true;
	if(n<2 || n%2==0) return false;   //4
	for(long long i=3;i*i<=n;i+=2)    //6*sqrt(n)/2
	if(n%i==0) return false;/2      
	return true;                       //1
	}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	long long i=1e9+7;
	if(ktnt(i))
	cout<<"la so nguyen to";
	else
	cout<<" k la so nguyen to";
}


