#include<bits/stdc++.h>
using namespace std;
typedef struct
{
	float gio, phut;
	}tg;
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  tg a[n+2];
  for(int i=0;i<n;i++)
   cin>>a[i].gio>>a[i].phut;
   int dem1=1;
   int dem2;
  int max=0;
   for(int j=1;j<=n;j++)
    {if( a[j].gio*60+a[j].phut==a[j-1].gio*60+a[j-1].phut)
     dem1++;
    else
    {
    	dem2=dem1;
    	dem1=1;
    	if(dem2>max)
    	max=dem2;
    	
    
	 }}
	 
     cout<<max;
     }
    
