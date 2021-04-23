#include<bits/stdc++.h>
using namespace std;
#define ll long long
//set: loc cac phan tu giong nhau sap xep tang dan

int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	set<int> S;
//	multiset<int> S;
	for(int x:{1, 3, 5,6, 7,8, 5, 5})
	{
		S.insert(x);
	}
	for(auto x:S)
	cout<<x<<" ";
	cout<<"Phan t be nhat:"<<*S.begin();
	cout<<"Phan t lon nhat:"<<*S.rbegin();
	// xoa
	S.erase(4);
	cout<<endl;
	for(auto x:S)
	cout<<x<<" ";
	int k=5;
	auto it=S.find(k);
	if(it!=S.end())
	S.erase(it);
	cout<<endl;
	for(auto x:S)
	cout<<x<<" ";
	
}


