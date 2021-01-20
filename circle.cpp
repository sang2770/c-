#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  float a;
  cin>>a;
  if(a<0)
   cout<<"NO CIRCLE";
   else{
   
  float s, v;
  s=pi*a*a;
  v=2*pi*a;
  printf("%.2f", v);
  printf("\n%.2f", s);
  }
  }
  



