#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	map<string, int> s;
	int n, m;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		string res;
		cin>>res;
		s[res]++;
		}
	cin>>m;
	for(int i=0;i<m;i++)
	{
//		fflush(stdin);n
		string q;
//		getline(cin, q);
		cin>>q;
		cout<<s[q]<<endl;
		}
		
		
	
}


