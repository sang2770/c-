#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int N, M;
  cin>>N>>M;
  int x;
  cin>>x;
  int a[N+2][M+3], b[N+2][M+3];
  for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
	   cin>>a[i][j];
  for(int i=0;i<N;i++)
	  for(int j=0;j<M;j++)
	   cin>>b[i][j];
  int c[N+2][2*M+3];
  int j=0;
  int tg=x;
  int t=0, k=0;
    for(int i=0;i<N;i++)
    {
    	while(j<M*2 && t<M || k< M)
    	 {
    	 	if(j<tg)
    	 	 {c[i][j]=a[i][t]; j++;t++;}
    	 	else if(j>=tg  && j<x+tg)
    	 	 {c[i][j]=b[i][k]; j++;k++;}
    	 	 
    	 	else
    	 	tg+=2*x;
    	 	}
			j=0;
			t=0;k=0;
			tg=x;}
    	 	
    for(int i=0;i<N;i++)
   	 {
		for(int j=0;j<M*2;j++)
  	   cout<<c[i][j]<<" ";
  	   cout<<"\n";
  	   }
  	   }
  	   
  
  	
  	
		
	
	  
	
     
    



