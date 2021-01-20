#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
	int tg;
	if(n%3==0)
	 return true;
	while(n!=0)
	{
		tg=n%10;
		n=n/10;
		if(tg==3)
		return true;
		
	}
	return false;
	
}

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  ll a[1000];
  a[1]=3;
  int j=2, i=0;
  ll b=2, c=3;
  while(i>=0&& j<=1000)
  {
  ll tg=c+b;
  if(check(tg)==true)
   {
   a[j]=tg;
    j++;}
   b=c;
   c=tg;
   i++;
}
while(!EOF)
{
  int k;
  cin>>k;
  cout<<a[k]<<endl;  	
}
}
  
  

