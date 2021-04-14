#include<bits/stdc++.h>
using namespace std;
typedef double ham(double);
// tinh tich phan dua ve dien tich hinh thang
double tp(double a, double b, ham f, int n=1e5)
{
	double h=(b-a)/n, s=f(a)+f(b);
	for(int i=0;i<=n;i++)
	s+=2*f(a+i*h);
	return s*h/2;
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<"tich phanL:"<<setprecision(3)<<fixed<<tp(0, acos(-1), sin);
	
}


