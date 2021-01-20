#include<bits/stdc++.h>
using namespace std;
class TD{

	int hd, td;
	public:
		void nhap(){cin>>hd>>td;}
		 void xuat(){ cout<<hd<<" "<<td;}
		 float khoangcach( TD p);		
};
float TD::khoangcach(TD p)
{
	float t;
	t=sqrt(pow(hd-p.hd, 2)+pow(td-p.td, 2));
	return t;
	}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  TD a, b, c;
  a.nhap();
  b.nhap();
  c.nhap();
  //cout<<a.khoangcach(b);
  float s;
  float q;
  q=a.khoangcach(b)+b.khoangcach(c)+c.khoangcach(a);
  s=sqrt(q*(q-a.khoangcach(b))*(q-b.khoangcach(c))*(q-c.khoangcach(a)));
  cout<<s;
  
  
  }

  



