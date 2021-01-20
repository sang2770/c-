#include<bits/stdc++.h>
using namespace std;
bool sochinhphuong(int n)
{
	for(int i=0;i*i<=n;i++)
	 {
	 	if(i*i==n)
	 	 return true;
	 }
	return false;
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  int *a=new int [n+1];
  int dem1=0, dem2=0;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  	if(a[i]%3!=0)
  	 dem1++;
  	if(sochinhphuong(a[i])==true)
	 dem2++;  	
  }
  int dem3=0;
   for(int i=0;i<n-1;i++)
    if(a[i]!=0&&a[i+1]%a[i]==0 )
     dem3++;
    int dem4=0, dem5=0;
    for(int i=0;i<n-1;i++)
     for(int j=i+1;j<n;j++)
	  if(a[i]%2==0 && a[j]%2==0 ||a[i]%2!=0 && a[j]%2!=0)
        dem4++;
    
    for(int i=0;i<n-2;i++)
     if(a[i]<a[i+1] && a[i+1]<a[i+2])
      dem5++;
    cout<<dem1<<"\n"<<dem2<<"\n"<<dem3<<"\n"<<dem4<<"\n"<<dem5;
}
      
       
        
   

