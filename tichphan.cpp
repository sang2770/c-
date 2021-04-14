#include<bits/stdc++.h>
using namespace std;
//itch phan
typedef double ham(double); //dinh nghia ham
double tp(double a, double b, ham f, int n=1e5)
{
	double h=(b-a)/n, s=f(a)+f(b);
	for(int i=0;i<=n;i++)
	s+=2*f(a+i*h);
	return s*h/2;
}
double g(double x){ return 4/(x*x+1);}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<"tich phanL:"<<setprecision(3)<<fixed<<tp(0,1, g, 100000);
	cout<<"tich phanL:"<<setprecision(3)<<fixed<<tp(0, acos(-1), sin);
	cout<<"tich phanL:"<<setprecision(3)<<fixed<<tp(0, 10, [](double x){return 2*x;});
}


