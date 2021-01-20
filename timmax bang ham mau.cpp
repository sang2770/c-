#include<bits/stdc++.h>
using namespace std;
#define ll long long
template<class T>
class ps{
	T ts, ms;
	public:
		void nhap()
		{
			cin>>ts>>ms;
		}
		friend bool operator>(ps<T> &p, ps<T> &p1)
		{
		   return p.ts*p1.ms > p.ms*p1.ts;
		   
		}
		friend istream &operator>>(istream &it, ps<T> &p)
		{
			it>>p.ts>>p.ms;
			return it;
		}
		friend ostream &operator<<(ostream &it, ps<T> &p)
		{
			it<<p.ts<<"/"<<p.ms;
			return it;
		}
		void xuat()
		{
			cout<<ts<<"/"<<ms;
		}
		
};
template<class T>
T timmax(T x, T y)
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
  int a, b;
  cin>>a>>b;
  cout<<timmax(a, b);
  ps<double> c, d;
  cin>>c>>d;
  timmax(c,d).xuat();
  ps<double> f;
  f=timmax(c, d);
  cout<<f;	
}

