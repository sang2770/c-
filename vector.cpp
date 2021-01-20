#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  vector<int>it;
  int a;
  cout<<"Nhap a:\n";
  do
  {
  	cin>>a;
  	it.push_back(a);
  }while(a);
  
//  cout<<int(it.size());
  int res=0;
  it.push_back(100);
  it.push_back(200);
  it.push_back(300);
   vector<int>::iterator my;
   for(my=it.begin();my<it.end();my++)
   {
    *my=pow(*my, 2);
    cout<<*my<<" ";}
    int i=0;
    vector<int>::reverse_iterator rit;
    for(rit=it.rbegin();rit!=it.rend();++rit)
    {
	*rit=++i;
	cout<<*rit<<" ";}
  while(!it.empty())
  {
  	res+=it.front();
  	it.erase(it.begin());
  }
  
  
  cout<<res;
}

