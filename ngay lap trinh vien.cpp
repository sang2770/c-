#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool namnhuan(int n)
{
	if(n%400==0 || (n%4==0 && n%100 ))
	return true;
	return false;
	}
	 
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  if(n<2009)
  cout<<-1;
  else
  {
  	if(namnhuan(n))
  	 cout<<"12.09."<<n<<" - Happy Programmer's Day!";
  	 else
  	 cout<<"13.09."<<n<<" - Happy Programmer's Day!";
  
  }
  }
