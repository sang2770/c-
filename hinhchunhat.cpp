#include<bits/stdc++.h>
using namespace std;
#define ll long long
// lp hcn
class hcn{
	private:
		int cd, cr;
	public:
		friend istream &operator >>(istream &it , hcn &p);
		friend ostream &operator <<(ostream &it , hcn &p);
		int res(){
			return cd*cr;
			}
};
istream &operator >>(istream &it , hcn &p)
{
	it>>p.cd>>p.cr;
	return it;
	}
ostream &operator <<(ostream &it , hcn &p)
{
	it<<p.cd<<" "<<p.cr;
	return it;
	}
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int n, max=0;
    cin>>n;
    hcn *a=new hcn[n+1];
    for(int i=0;i<n;i++)
     {
     	cin>>a[i];
     	int b=a[i].res();
     	if(b>max)
     	 max=b;
     	 }
     for(int i=0;i<n;i++)
      if(a[i].res()==max)
       cout<<i+1<<endl;
    delete[] a;
	   }     

