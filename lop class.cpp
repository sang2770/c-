#include<bits/stdc++.h>
using namespace std;
#define ll long long
class ps{
	int ts, ms;
	public :
		void nhap(){ cin>>ts>>ms;}
		void xuat(){cout<<ts<<" "<<ms<<endl;}
		ps operator+(ps b);
		ps operator*(ps b);
		ps operator++();
		ps operator++(int);
};
ps ps::operator+(ps b)
{
	ps t;
	t.ts=ts*b.ms+ms*b.ts;
	t.ms=ms*b.ms;
	return t;
}
ps ps::operator*(ps b)
{
	ps t;
	t.ts=ts*b.ts;
	t.ms=ms*b.ms;
	return t;
}
ps ps::operator++()
{
	ts=ts+ms;
	return (*this);
}
ps ps::operator++(int)
{
	ps t;
	t=*this;
	ts=ts+ms;
	return t;
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ps a, b, c;
  a.nhap();
  b.nhap();
  c=a+b;
  c.xuat();
  c=a*b;
  c.xuat();
  ps d;
  d=c++;
  d.xuat();
  d=++c;
  d.xuat();
}
  

