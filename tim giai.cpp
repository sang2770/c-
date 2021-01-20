#include<bits/stdc++.h>
using namespace std;
typedef struct{
	char hoten[100];
	int diem;
	char khoa[100];
	
}sinhvien;
bool ss (sinhvien a, sinhvien b)
{
	return a.diem>b.diem;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  
  sinhvien a[n+1];
  for(int i=0;i<n;i++)
  {
  	
  	gets(a[i].hoten);
  	cin>>a[i].diem;
  	gets(a[i].khoa);
  	
   
	}
	int j=0, k=0;
	sinhvien b[3];
	sinhvien c[n];
  	for(int i=0;i<n;i++)
  	 if(a[i].khoa=="DDT")
  	  {b[j]=a[i];
  	  j++;
  	  }
  	 else
  	 {
  	 	c[k]=a[i];
  	 	k++;
  	 	}
  	cout<<b[0].hoten<<" "<<b[0].diem<<" "<<b[0].khoa;  	 
  	}
  	 
  	 
  	 
  	
  	
  	

