#include<bits/stdc++.h>
using namespace std;
#define ll long long
//diem Fecma 
// tim diem fecma bang thuat toan lep doi
typedef pair<double, double> diem;
#define x first
#define y second

// ham tinh khoang cach giua hai diem
double kc(diem A, diem B){ double u=A.x-B.x, v=A.y-B.y; return sqrt(u*u+v*v);}
double tkc(diem M, diem A, diem B, diem C){
	return kc(A, M)+kc(B, M)+kc(C, M);
}
int main()
{
//	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	diem A, B, C, M;
	//ham tao
//	diem G(1,2);
//	cout<<G.x<<":"<<G.y;
	
	//make pair
//	diem N=make_pair(1,4);
//	cout<<N.x<<":"<<N.y;

	//gan gia tri
//	diem J={1,6};
//	cout<<J.x<<":"<<J.y;

	double ss=1e-5, d=1e5;   //mot hinh chu nhat bao quanh
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
	
	M=diem((A.x+B.x+C.x)/3, (A.y+B.y+C.y)/3);   //M=make_pair(..,..);
	double k=tkc(M, A, B, C);
	cout<<k;
	while(d>ss)
	{
		diem N[] ={{M.x+d, M.y},{M.x-d, M.y},{M.x, M.y+d},{M.x, M.y-d}};
		for(diem D:N)
		{
			double z=tkc(D, A, B, C);
			if(z<k) {
				k=z;M=D;d*=2;break;
			}
		}
		d/=2;
	}
	cout<<setprecision(8)<<fixed<<M.x<<":"<<M.y<<endl;	
}


