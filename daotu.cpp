#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	vector<string> b;
	string c="";
	a+=' ';
	for(int i=0;i<a.size()+1;i++)
	{
	  if(a[i] !=' ')
	  {
	  	c+=a[i];
	  }
	  else
	  {
	  	b.push_back(c);
	  	c="";
	  }
	}
	for(int i=b.size()-1;i>=0;i--)
	cout<<b[i]<<" ";
	
	
}


