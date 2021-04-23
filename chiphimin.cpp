#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> ipair; //first-chiphi, second -so
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	priority_queue<ipair, vector<ipair>, greater<ipair> > Q;
	int s, f;
	map<int, int> L;  //luu gtri ngan nhat xuat hien
	cin>>s>>f;
	Q.push({0, s});
	L[s]=0;
	int res=-1;
	while(Q.size())
	{
		ipair u=Q.top();
		if(u.second==f)
		{
			res=u.first;
			break;
		}
		Q.pop();
		for(int a=1; a*a<=u.nsecond;a++)
		if(u.second%a==0)
		{
			int b=u.second/a, v=(a-1)*(b+1), z=(b%a? b+a:b/a)+u.first;
			if(v>=f && (L.find(v)==L.end()|| L[v]>z))
			{
				Q.push({z, v});
				L[v]=z;
			}
		}
	}
	cout<<res;
	
}


