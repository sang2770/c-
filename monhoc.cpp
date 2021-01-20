#include<bits/stdc++.h>
using namespace std;
#define ll long long
class mon{
	private:
		string ten;
		int sotin;
		int giatri;
//		int res;
	public:
		mon(){
		}
		mon(string a, int sotin, int giatri, int res)
		{
			a="";
			sotin=0;
			giatri=0;
			res=0;
		}
		void nhap()
		{
			cout<<"Nhap ten mon:";
			fflush(stdin);
			getline(cin, ten);
			cout<<"Nhap so tin:";
			cin>>sotin;
			cout<<"nhap gia tri:";
			cin>>giatri;
			
		}
		void xuat()
		{
			cout<<ten<<" "<<sotin<<endl;
			
		}
		
		
		int gettin(){
			return sotin;
		}
		int getgtri(){
			return giatri;
		}};
class Listmon{
   protected:
   	int n;
   	mon *a;
   	int res;
   	public:
   	  Listmon()
   	  {
		 }
		 ~Listmon()
		 {
		 	delete[] a;
		 }
	  void input()
	  {
	  	cin>>n;
	  	a=new mon[n+1];
	    res=0;
	   for(int i=0;i<n;i++)
	  {
		a[i].nhap();
		if(a[i].getgtri()==1)
	  	 res+=a[i].gettin();
	  }
	  	 
	  }
	  void display()
	  {
	  	for(int i=0;i<n;i++)
	  	 a[i].xuat();
	  }

	  int gettong()
	  {return  res;
	  }
	   
};
class sinhvien:public Listmon{
	private:
		string name;
//		int *check;
	public:
		sinhvien(){
		}
		~sinhvien(){
		
//		{delete[] check;
		}
		void in(){
			cout<<"Nhap ten:";
			fflush(stdin);
			getline(cin, name);
			cout<<"Nhap bang thong ke";
			Listmon::input();
			}
		
//	    int tong()
	   
};

int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
    int n;
    cin>>n;
    sinhvien *a=new sinhvien[n+1];
    for(int i=0;i<n;i++)
     a[i].in();
      for(int i=0;i<n;i++)
      cout<< a[i].gettong()<<" ";
    
    
   
  }

