#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n;
	cin>>n;
	string a;
	cin>>a;
	vector<char> res;
	for(int i=0;i<a.size();i++)
		if(a[i]+n>90)
		{
			res.push_back(a[i]+n-90+64);
			}
		else
			res.push_back(a[i]+n);
	cout<<n<<endl;
	for(auto i: res)
	cout<<i;
}


