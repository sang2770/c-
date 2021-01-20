#include<bits/stdc++.h>
using namespace std;
#define ll long long
string ngay[7]={"thu hai","thu ba","thu tu","thu nam","thu sau","thu bay","chu nhat"};

int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	int a, vt;
  	vector<string>save;
  	string b;
  	cin>>a;
  	cin.ignore();
  	getline(cin, b);
  	int tg=(a-1)%7;
	for(int j=0;j<=6;j++)
	 if(ngay[j]==b)
	  {
	  vt=j;
	  break;}
	  if(vt-tg<0)
	  cout<<ngay[7-(tg-vt)]<<endl;
	  else
	   cout<<ngay[vt-tg]<<endl;

		
  	
  }
}
