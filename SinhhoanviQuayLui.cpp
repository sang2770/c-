#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char, int> F;
// quay lui tim so hona vi
void TRY(string x, int n)
{
	if(x.size()==n) cout<<x<<endl;
	else
	{
		for(auto &f:F)
		if(f.second>0) 
		{
			f.second--;// lui
			TRY(x+f.first, n);
			f.second++; // tien
			
		}
	}
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string s;
	int n=s.size();
	cin>>s;
	for(char c:s)
	F[c]++;
	TRY("", s.size());
	
	
}


