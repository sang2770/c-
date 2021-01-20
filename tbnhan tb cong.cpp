#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  double s=1, t=0;
  double a[n+1], dems=0, demt=0;
  for(int i=0;i<n;i++)
   {
   cin>>a[i];
   if(a[i]<0)
   { t+=a[i];
    demt++;}
    if(a[i]>0)
    {dems++;
	s=s*a[i];
    
    }
}
   if(t==0)
    cout<<"khong co so am\n";
    else 
    cout<<t/demt<<endl;
    if(dems==0)
     cout<<"khong co so duong";
     else 
	 cout<<pow(s, 1/dems);
     }


   
   

