#include<bits/stdc++.h>
using namespace std;
//tim diem thuoc ab gan m nhat
typedef pair<double, double> dpair;
#define x first
#define y second
double distance(dpair a, dpair b)
{
	a.x-=b.x;
	a.y-=b.y;
	return sqrt(a.x*a.x+a.y*a.y);
}
int main()
{
	dpair a, b, c, m;
	cin>>a.x>>a.y>>b.x>>b.y>>m.x>>m.y;
	while(distance(a, b)>1e-5)
	{
		c={(a.x+b.x)/2, (a.y+b.y)/2};
		distance(a, m)>distance(b,m)?a=c:b=c;
		
	}
	cout<<setprecision(6)<<fixed<<a.x<<" "<<a.y<<endl;
}
// tim diem trong tam giac gan m nhat : tim diem min((diem tren ba canh gan m nhat))



