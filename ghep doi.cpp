#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, m;
  cin>>n>>m;
  int a[m]={};
  for(int i=0;i<m;i++)
  if(n>0) {a[i]++; n--;}
  else break;
  if(n>0)
   a[0]+=n;
	int dem=0;
	int k=0;
	while(a[k]>0)
	  {
	  	dem+=a[k]-1;
	  	a[k]--;}
       }
    if(dem=0)
    cout<<0<<" "<<dem;
    else
    cout<<1<<" "dem;

	
	 }



