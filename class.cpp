#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
{
	if(a>b)a=a-b;
	else if(a<b) b=b-a;
	else return a;
	
}
class pso{
	private:
	int ts, ms;
	public:
	 void nhap(){ cin>>ts>>ms;
	 }
	 void xuat(){cout<<ts<<" "<<ms<<endl;	 }
	 pso nhan(pso p);
	 pso cong(pso p);
		
};
pso pso::cong(pso p)
{
	pso t;
	t.ms=ms*p.ms;
	t.ts=ts*p.ms+ms*p.ts;
	int a=ucln(t.ms, t.ts);
	t.ms=t.ms/a;
	t.ts=(ts*p.ms+ms*p.ts)/a;
	return t;
}
pso pso::nhan(pso p)
{
	pso t;
	t.ms=ms*p.ms;
	t.ts=ts*p.ts;
	return t;
}
int main()
{
	pso a, b, p;
	a.nhap();
	b.nhap();
	p=a.nhan(b);
	p.xuat();
	p=a.cong(b);
	p.xuat();
	}


