#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	double hd, td;
}TD;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll  n;
  cin>>n;
  TD a[n+1];
  for(int i=1;i<=n;i++)
   cin>>a[i].hd>>a[i].td;
   double b[n+1][n+1]={};
   for(int i=1;i<n;i++)
    b[i][i+1]=sqrt(pow(a[i].hd-a[i+1].hd, 2)+pow(a[i].td-a[i+1].td, 2));
    for(int i=1;i<n;i++)
    for(int j=i+2;j<=n;j++)
     {  
         b[i][j]=b[i][j-1]+b[j-1][j];
         }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	ll u, v;
    	cin>>u>>v;
    	printf("%.3f\n", b[u][v]);
    }
    
        
     }
