#include<bits/stdc++.h>
using namespace std;
#define ll long long
string dao(string a)
{
	string s="";
	for(int i=a.size()-1;i>=0;i--)
	  s+=a[i];
	return s;
	
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  string a, b;
  cin>>a>>b;
  a=dao(a);
  b=dao(b);
  string s="";
  if(a.size()>b.size())
    for(int i=b.size();i<a.size();i++)
     b+='0';
  if(a.size()<b.size())
    for(int i=a.size();i<b.size();i++)
     a+='0';
    int nho=0;
    for(int i=0;i<a.size();i++)
    {
    	int tg=0;
		tg=a[i]-'0'+b[i]-'0'+nho;
    	    s+=tg%10+'0';
    	
    		nho=tg/10;
		}
	if(nho!=0)
	s+=nho+'0';
	cout<<dao(s);
    	
    	
	
}
  

