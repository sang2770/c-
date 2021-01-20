#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int test;
  cin>>test;
  for(int i=0;i<test;i++)
  {
  	int n, m, k;
  	cin>>n>>m>>k;
  	int dem=0;
  	int tien=0;
  	int sochai=0;
  	while(n>=m)
  	{
  		//tien+=m;
		  dem++;
  		  n=n-m;
  		if(dem>0 && dem%k==0)
  		sochai++;
  		}
  	int tg=dem-sochai*k;
  	dem=dem+sochai;
  	sochai+=tg;
 	while(sochai>=k)
  	{
  		dem++;
  		sochai=sochai-k+1;}
  	
  	cout<<dem<<endl;
	  }	}


