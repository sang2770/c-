#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string, bool> D;
void lietke(string x){
	if(x=="" or D[x])
	return;
	D[x]=true;
	lietke(x.substr(0, x.size()-1));  //tach xau con
	lietke(x.substr(1, x.size()));
}
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	string x;
	cin>>x;
	lietke(x);
	for(auto z:D)
	cout<<z.first<<endl;
}


