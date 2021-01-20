#include<bits/stdc++.h>
using namespace std;
int bacthang(int n)
{
	int a1=1, a2=2, a3=4;
	if(n==1)
	 return 1;
	if(n==2)
	return 2;
	if(n==3)
	return 4;
	int i=4, a;
	while(i<=n)
	{
		a=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=a;
		i++;
		}
	return a;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  cout<<bacthang(n);
  }
  



