#include<bits/stdc++.h>
using namespace std;
void nhap(int p[][50], int n)
{
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	  cin>>p[i][j];
	  }
int test(int a[][50], int b[][50], int m, int n)
{
	bool cn;
	int res=0;
	for(int i=0;i<=m-n;i++)
	{
		for(int j=0;j<=m-n;j++)
		{
			cn=true;
			for(int k=0;k<n;k++)
			 {
			 	for(int q=0;q<n;q++)
			 	 {
			 	 	if(a[k][q] != b[i+k][j+q])
			 	 	 {
			 	 	 	cn=false;
			 	 	 	break;
			 	 	 	}
			 	 	}
			 	 	if(cn==false)
			 	 	break;
			 	}
			 	if(cn==true)
			 	res++;
			 	}}
		return res;}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int m, n;
  cin>>m>>n;
  int a[50][50], b[50][50];
  nhap(a, m);
  nhap(b, n);
  if(test(a, b, m, n)>0)
   cout<<"co";
   else cout<<"ko";
  
  }
  
