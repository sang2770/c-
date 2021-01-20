#include<bits/stdc++.h>
using namespace std;
class TD{
	private:

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
  float q;
  q=a.khoangcach(b)+b.khoangcach(c)+c.khoangcach(a);
  cout<<sqrt(q*(q-a.khoangcach(b)*(q-b.khoangcach(c)*(q-c.khoangcach(a)))));
  int n;
  cin>>n;
  TD A[n];
  for(int i=0;i<n;i++)
     A[i].nhap();
    float res=0;
    for(int i=0;i<n-1;i++)
     res+=A[i].khoangcach(A[i+1]);
	  cout<<"\n"<<res;}    
  
  
  

  



