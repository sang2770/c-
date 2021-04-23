#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool DFS(int s, int f)
{
	if(s==f) return true; 
	if(s<f) return false;
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
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	cout<<DFS(30, 10)?"Ok":"No";
}


