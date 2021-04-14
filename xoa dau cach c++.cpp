#include<bits/stdc++.h>
using namespace std;
// xoa dau cach thua
enum status{
	dau, than
};
void chuanten(string s)
{
	status t=dau;
	for(char c:s)
	{
		if(c==' ')
		{
			if(t==dau) continue;
			else { cout<<c; t=dau;}
		}
		else
		{
			if(t==dau ) {cout<<char(toupper(c));t=than;}
			else
			cout<<char(tolower(c));
		}
	}
}
enum mau{ Do, vang=4, xanh};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	getline(cin, s);
	chuanten(s);
	
}


