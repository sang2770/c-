#include<bits/stdc++.h>
using namespace std;
// chuyen thap phan sang nhi phan
void thapnhi(int n)
{
	stack<int>A;
	while(n>0)
	{
		A.push(n%2);
		n=n/2;
		}
	while(!A.empty())
	 {
	 cout<<A.top();
	 A.pop();}
	 }
int  nhithap(int n)
{
	int res=0;
	int i=0;
	while(n!=0)
	{
		res+=(n%10)*pow(2, i);
		i++;
		n=n/10;
		}
	return res;
	}
		
		
	
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  int n;
  cin>>n;
  cout<<"he nhi phan =";
  thapnhi(n);
  int m;
  cin>>m;
  cout<<"he  nhi thap ="<<nhithap(m);
  
  }



