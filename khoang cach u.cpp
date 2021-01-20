#include<bits/stdc++.h>
using namespace std;
typedef struct
{
	int hoanhdo, tungdo;
	}toado;
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n, m;
  cin>>n>>m;
  toado a[n], b[m];
  for(int i=0;i<n;i++)
   cin>>a[i].hoanhdo>>a[i].tungdo;
   for(int i=0;i<m;i++)
    cin>>b[i].hoanhdo>>b[i].tungdo;
    for(int i=0;i<n;i++)
    { int min=abs(a[i].hoanhdo-b[0].hoanhdo)+abs(a[i].tungdo-b[0].tungdo);
      int vt=1;
     for(int j=1;j<m;j++)
      {
      	if(min>abs(a[i].hoanhdo-b[j].hoanhdo)+abs(a[i].tungdo-b[j].tungdo))
      	{min=abs(a[i].hoanhdo-b[j].hoanhdo)+abs(a[i].tungdo-b[j].tungdo);
      	vt=j+1;
      	}}
      	cout<<vt<<endl;}
      	}
      	 
      	
      	
     
    
    
   



