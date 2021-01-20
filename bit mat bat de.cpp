#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b,i)    for(int i = a; i < b; i ++)
//                    Han
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int k, n, dem = 1;
	cin >> n >> k;
	vector<int> Name;
	//earse
	for(int i =1; i <= n ; i ++)
	{
		Name.push_back(i);
	}
	while(Name.size() != 1)
	{
		if(dem == k)
		{
			dem = 1;
		}
		else
		{
			Name.push_back(Name.front());
			dem ++;
		}
		Name.erase(Name.begin());
	}
	cout << Name[0];
}
 
