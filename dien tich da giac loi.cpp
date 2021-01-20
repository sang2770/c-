#include<bits/stdc++.h>
using namespace std;
class TD
{
	int hd, td;
	public:
		void nhap(){
			cin>>hd>>td;}
		float kc(TD p);
		
};
float TD::kc(TD p)
{
	float t;
	t=sqrt(pow((hd-p.hd), 2)+pow((td-p.td), 2));
	return t;
}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  TD *a=new TD[n+1];
  for(int i=0;i<n;i++)
   a[i].nhap();
   float s=0, p=0;
   for(int i=0;i<n-1;i++)
    p+=a[i].kc(a[i+1]);
    p+=a[0].kc(a[n-1]);
    for(int i=1;i<n-1;i++)
     {
     	float res1=a[0].kc(a[i]);
     	float res2=a[0].kc(a[i+1]);
     	float res3=a[i].kc(a[i+1]);
     	float v=(res1+res2+res3)/2;
     	s+=sqrt(v*(v-res1)*(v-res2)*(v-res3));
     	}
    printf("%.3f", p);
	printf("\n%.3f", s);     
   
   
}
  
