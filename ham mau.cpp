#include<bits/stdc++.h>
using namespace std;
struct ps{
	int ts, ms;
};
istream &operator >>(istream &as, ps &p)
{
	is>>p.ts>>p.ms;
	return is;
	}
ostream &operator <<(ostream &os, ps &p)
{
	os<<p.ts<<p.ms;
	return os;
	}
template <class B>
void nhap(int &n, B *&a)
{
	
	cin>>n;
	a=new B [n+1];
	for(int i=0;i<n;i++)
	cin>>a[i];
	}
template <class B>
void xuat(int n, B *a)
{
	for(int i=0;i<n;i++)
	 cout<<a[i];
	 }
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  ps *a;
  nhap(n ,a);
  xuat(n, a);
  }



