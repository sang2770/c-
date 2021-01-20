#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dem(int m, int n)
{
	if(m==0 )
	{
	if(n==0) return 1;
	else
	  return 0;}
	else
	{
		if(m>n) return dem(m-1, n);
		else
		return dem(m-1, n)+dem(m, n-m);
		}
	  
	}
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  cout<<dem(n, n);
  }

