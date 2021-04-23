#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int s, f;
		cin>>s>>f;
		stack<pair<int, int>> S;
		map<int, int> L; // 
		int res=-1;
		S.push({s, 0});
		L[s]=0;
		while(S.size()!=0)
		{
			pair<int, int> a=S.top();
			S.pop();
			if(a.first==f)
			{
				res=a.second;
				break;
			}
			int u=a.first;
			for(int i=1;i*i<=u;i++)
			{
				if(u%i==0)
				{
					int j=u/i, m=(i-1)*(j+1), z=(j%i==0?j/i:j+i)+a.second;
					if(m>=f && (L.find(m)==L.end()) || L[m]>z)
					{
						L[m]=z;
						S.push({m, z});
					}
				}
			}
		}
		cout<<res;
	}

}


