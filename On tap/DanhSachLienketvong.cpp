#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	int elem ;
	node *next;
	node(int e=0)
	{
		elem=e;
		}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	// tao danh sach
	node *V= new node(1), *H=V;
	int n, k;
	cin>>n>>k;
	for(int i=2;i<=n;i++)
	{
		V->next=new node(i);
		V=V->next;
	}
	V->next=H;
	while(V->next!=V)
	{
		for(int i=1;i<k;i++)
		V=V->next;
		V->next=V->next->next;
	}
	cout<<V->elem;
	
	
	
	
}


