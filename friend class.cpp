#include<bits/stdc++.h>
using namespace std;
class TD
{ 
  int hd, td;
  public:
  	
	  
  	void nhap(){ cin>>hd>>td;};
  	void xuat(){ cout<<hd<<" "<<td;	  };
  	float k();
  	float kc(TD &p);
  	friend float kc2(TD a, TD b);
  };
float TD::k()
{
	float t;
	t=sqrt(hd*hd + td*td);
	return t;
	
}
 float TD::kc(TD &p)
 {
 	float t;
	t=sqrt(pow((hd-p.hd), 2)+pow((td-p.td), 2));
	return t;
 	
	  } 	
float kc2(TD a, TD b) // goi ham friend
{
	float t;
	t=sqrt(pow((a.hd-b.hd), 2)+pow(a.td-b.td, 2));
	return t;
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  TD a, b;
  a.nhap();
  b.nhap();
  cout<<a.k()<<endl;
  cout<<a.kc(b)<<endl;
  cout<<kc2(a,b);
}

