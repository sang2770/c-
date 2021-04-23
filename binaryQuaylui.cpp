#include<bits/stdc++.h>
using namespace std;
#define ll long long
void TRY(string x, int n)
{
	if(x.size()==n)
	cout<<x<<"\n";
	else
	{
		TRY(x+"0", n);
		TRY(x+"1", n);
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	TRY("", 4);
}


