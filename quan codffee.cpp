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
   int dem=1;
   int sophucvu=1;
   
   int j=1;
   while(j<=n)
   {
   	if( a[j].gio*60+a[j].phut==a[j-1].gio*60+a[j-1].phut)
   	 {
   	 	if(sophucvu>=dem)
   	 	{dem++;
   	 	sophucvu++;}
   	 	else
   	 	sophucvu++;
   	 	
   	 	j++;
   	 	}
   	else
   	 {sophucvu=1;
   	 j++;}
   	
   	  
   	} 
   	cout<<dem;
    
    }
  


