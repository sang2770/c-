#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, k;
map<pair<int , int>, int>check;
check[make_pair(0, 0)]=1;
int BFS()
{
	queue<pair<ll, ll>>save;
	save.push(make_pair(0, 0));
	int buoc=0;
	while(save.size())
	{
		pair<ll, ll>x=save.front();
		if(x.first==k || x.second==k)
		{
			return  buoc;
			}
			// do het nuoc mot bonh di
		if(check.find(make_pair(x.first, 0))!=check.end())
		 {
		 	save.push(make_pair(x.first, 0));
		 }
		 if(check.find(make_pair(0,x.second))!=check.end())
		  save.push(make_pair(x.first, 0));
		  //do day 1 binh
		  if(check.find(make_pair(x.first, m))!=check.end())
		  save.push(make_pair(x.first, m));
		  if(check.find(make_pair(x.second, n))!=check.end())
		  save.push(make_pair(x.first, 0));
		 
}
int main()
{
  cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
  check[make_pair(0, 0)]=1;
  cout<<check[make_pair(0,0)];
}


