#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, bool> D;
bool DFS(int s, int f)
{
	if(s==f ) return true; 
	
	if(s<f || D[s]) return false;
	D[s]=true;
	for(int a=1;a*a<=s;a++)
	{
		if(s%a==0)
		{
			if(s%a==0 && DFS(((a-1)*(s/a+1)),f))
			return true;
		}
		
	}
	return false;
}
void dfs(int s)
{
	if(D[s]) return;
	D[s]=true;
	for(int a=1;a*a<=s;a++)
	if(s%a==0)
	dfs((a-1)*(s/a+1));
	
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<(DFS(30, 10)?"Ok":"No");
	cout<<"ol";
	int n;
	cin>>n;
	dfs(n);
	for(auto z:D)
	cout<<z.first<<" ";
	}
	
	


