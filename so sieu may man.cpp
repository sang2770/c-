#include<bits/stdc++.h>
using namespace std;
bool test(int n)
{
	int dem1=0, dem2=0, dem3=0;
	while(n>0)
	{
		if(n%10==4)
		dem1++;
		else if(n%10==7)
		dem2++;
		else
		dem3++;
		n=n/10;
	}
	if(dem1==dem2 && dem1!=0 && dem2!=0 &&dem3==0)
	return true;
	else
	return false;
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  while(true)
  {
  	if(test(n))
  	{
  		cout<<n;
  		break;
	  }
	else
	 n++;
  }
}
  

