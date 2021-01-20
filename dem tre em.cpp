#include<bits/stdc++.h>
using namespace std;
bool test(string s)
{
	if(s[0]=='+')
	return true;
	return false;
	}
string chuyen(string s)
{
	string b="";
	for(int i=2;i<s.size();i++)
	 b+=s[i];
	return b;
	}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  string a;
  cin.ignore();
  vector<string>A;
  int demngoan=0, demhu=0;
  for(int i=0;i<n;i++)
  {
  	cin.ignore();
  	getline(cin,a);
  	string b=chuyen(a);
  	A.push_back(b);
  	if(test(a)==true)
  	 demngoan++;
  	else
  	 demhu++;
  	 }
  	cout<<"Tong so tre ngoan : "<<demngoan<<" | Tong so tre hu : "<<demhu<<"\n"<<endl;
  	sort(A.begin(), A.end());
  	for(int i=0;i<A.size();i++)
  	 cout<<A[i]<<"\n"<<endl;
  	 }
  	
  	
  
  



