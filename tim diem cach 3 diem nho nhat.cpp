#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<double, double> diem;
#define x first
#define y second
double kc(diem A, diem B)
{
	double u=A.x-B.x, v=A.y-B.y;
	return sqrt(u*u+v*v);
}
double tongkc(diem M, diem A, diem B, diem C)
{
	return kc(M, A)+kc(M, B)+kc(M, C);
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	diem A(1,2), B(1,4), C(1,9), M;
	double ss=1e-5, d=1e5;
	M=make_pair((A.x+B.x+C.x)/3,(A.y+B.y+C.y)/3);
	double res=tongkc(M, A, B, C);
	while(d>ss)
	{
		diem c[]={{M.x+d, M.y},{M.x-d, M.y},{M.x, M.y+d},{M.x, M.y-d}};
		for(diem z:c)
		{
			double h=tongkc(z,A,B,C);
			if(res>h)
			{
				M=z;d*=2;res=h;
			}
			
		}
		d/=2;
	}
	cout<<setprecision(8)<<fixed<<M.x<<" "<<M.y;
	
}


