#include<bits/stdc++.h>
using namespace std;
int n, k, m;
//void induong(int s, int f, int d[])
//{
//	stack<int> res;
//	while(f!=s)
//	{
//		res.push(f);
//		f=d[f];
//	}
//	res.push(s);
//	while(res.size()!=0)
//	{
//		cout<<res.top()<<"=>";
//		res.pop();
//	}
//}
void induong(int s, int f, int d[])
{
	if(s==f)
	{
		cout<<s<<"->";
		return;
	}
	induong(s, d[f], d);
	cout<<f<<"->";
	return ;
}
int thangmay(int s, int f)
{
	queue<int> res;
	int d[n+1]={};
	res.push(s);
	d[s]=1;
	while(!res.empty())
	{
		int a=res.front();
		res.pop();
		if(a+k<=n && d[a+k]==0)
		{
			res.push(a+k);
			d[a+k]=a;
		}
		if(a+k>=1 && d[a-m]==0)
		{
			res.push(a-m);
			d[a-m]=a;
		}
		if(d[f]!=0) { induong(s, f, d); return 0;}
		}	
	return -1;
		
		}
	
	
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	
	cin>>n>>k>>m;
	int s, f;
	cin>>s>>f;
	thangmay(s,f);
//	cout<<d;
	
}


