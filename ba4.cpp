#include<bits/stdc++.h>
using namespace std;
//#define ll long long
void nhap(int a[][100], int n, int m)
{
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	   scanf("%d",&a[i][j]);
	}
float tbc(int  a[][100], int n, int m)
{
	int s=0;
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	   s+=a[i][j];
	return s/(float)(n*m);
	}
	   
	  
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
int n, m;
scanf("%d%d", &n, &m);
int a[100][100];
nhap(a, n, m);
printf("TBC la:");
printf("%f",tbc(a, n, m));
}

