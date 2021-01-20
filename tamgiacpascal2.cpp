#include<bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  long long a[n+10][n+10];
  a[1][1]=1;
  
  int k=2;
  for(int i=2;i<=n+1;i++)
   {
   	a[i][1]=1;
   	a[i][k]=1;
   	for(int j=2;j<k;j++)
		{a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	k++;
	
}
for(int i=1;i<=n+1;i++)
 {
 for(int j=1;j<=i;j++)
  cout<<a[i][j]<<" ";
  cout<<"\n";
}
 

		
   	
   }

