#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int a, b;
  cin>>a>>b;
  int dem=0, tg;
  if(a%2==0 && b%2==0)
   {
   	dem++; tg=2;
   }
  for(int i=3;i<=min(a, b);i+=2)
   if(a%i==0 && b%i==0)
     {
     	tg=i;
     	dem++;
	 }
	 if(dem==0)
	  cout<<-1;
	  else
	  cout<<tg;
}
   
    



