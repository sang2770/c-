#include<bits/stdc++.h>
using namespace std;
#define ll long long
double Pow(double x, int n)
{
	if(n==0) 	return 1;
	return (n%2?x:1)*Pow(x*x, n/2);
	
}
double POW(double x, int n)
{
	if(n%2==0)
	{
		double x=POW(x, n/2);
		return x*x;
	}
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	for(int i=0; i<20 ;i++)
	cout<<i<<" "<<Pow(2, i)<<endl;
	cout<<Pow(2,4);
}


