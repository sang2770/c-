#include<bits/stdc++.h>
using namespace std;
enum status{
	dau, than
};
void xoacach(string s)
{
	status t=dau;
	for(auto c:s)
	{
		if(c==' ')
		{
			if(t==dau)
			{
				continue;
			}
			else
			{
				cout<<c; t=dau;
			}
		}
		else
		{
			if(t==dau)
			{
				cout<<char(toupper(c));
				t=than;
			}
			else
			{
				cout<<char(tolower(c));
			}
			}
		}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	getline(cin, s);
	xoacach(s);
	cout<<s;
}


