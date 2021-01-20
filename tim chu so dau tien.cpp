#include<bits/stdc++.h>
using namespace std;
long long chuso(long long n)
{
	long long t;
	while(n>0)
	{
		t=n%10;
		n=n/10;
		}
	return t;
	}
vector<long long >save;
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int test;
  cin>>test;
  for(int i=0;i<test;i++)
   {
   int n;
   int m;
   	cin>>n>>m;
   	long long a=1;
   	for(int i=0;i<m;i++)
   	 a=a*n;
   	save.push_back(chuso(a));
   	}
   	for(int i=0;i<save.size();i++)
   	 cout<<save[i]<<endl;
   	}
   	
  



