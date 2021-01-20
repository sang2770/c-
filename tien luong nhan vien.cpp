#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	ll ms, gio, luong;
}nhanvien;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  nhanvien a[n+1];
  ll res=0;
  ll tongluong=0;
  for(int i=0;i<n;i++)
   {
   cin>>a[i].ms>>a[i].gio>>a[i].luong;
   res+=a[i].gio;
   tongluong+=a[i].luong*a[i].gio;
   if(a[i].gio<=0 || a[i].gio>480 ||a[i].luong<0)
   {
   	cout<<"So lieu sai";
   	return 0;
   }
}
   
  
   for(int i=0;i<n;i++)
    cout<<a[i].ms<<" "<<a[i].gio*a[i].luong<<endl;
    cout<<tongluong/res<<" "<<tongluong/n<<" "<<tongluong;
}
   



