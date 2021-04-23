#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Tim diem fecma
typedef pair<double, double> Diem; 
#define x first
#define y second
double Kc(Diem A, Diem B)
{
	double u=A.x-B.x;
	double v=A.y-B.y;
	return sqrt(u*u+v*v);
}
double Tkc(Diem A, Diem B, Diem C, Diem M)
{
	return Kc(A, M)+Kc(B, M)+Kc(C,M);
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	Diem A, B, C, M;
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
	M=make_pair((A.x+B.x+C.x)/3, (A.y+B.y+C.y)/3);
	double ss=1e-5, d=1e5;
	double res=Tkc(A, B, C, M);
//	cout<<res<<endl;
	while(d>ss)
	{
		Diem N[]={{M.x+d, M.y},{M.x-d, M.y},{M.x, M.y+d},{M.x, M.y-d}};
		for(Diem x: N)
		{
			double z=Tkc(A, B, C, x);
			if(z<res)
			{
				res=z;
				d*=2;
				M=x;
				break;
			}
			
		}
		d/=2;
	}
	cout<<setprecision(3)<<fixed<<M.x<<" "<<M.y<<endl;
}


