//list
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	list<int> L(5, 4); // danh sach lien ket kep
	L.push_front(6);
	L.push_front(6);
	L.push_front(6);
	L.push_back(7);
	L.push_back(8);
	for(auto x:L)
	cout<<x<<" ";
	L.pop_front();
	L.pop_back();
	cout<<"\n";
	for(auto x:L)
	cout<<x<<" ";
	
}


